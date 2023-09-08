#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * error_exit - Exits the program with an error message.
 * @message: The error message to display.
 */
void error_exit(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - Prints information from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
	printf("Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %s\n", header->e_type == ET_REL ? "REL (Relocatable file)" : header->e_type == ET_EXEC ? "EXEC (Executable file)" : header->e_type == ET_DYN ? "DYN (Shared object file)" : "Other");
	printf("Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		error_exit("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error: Can't open file");

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr) || memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
		error_exit("Error: Not an ELF file");

	print_elf_header_info(&elf_header);

	close(fd);
	return (0);
}


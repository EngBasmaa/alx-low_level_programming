#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "100-elf_header2.h"
#include "100-elf_header3.h"
void printElf_abi(unsigned char *e_ident);
void printElf_osabi(unsigned char *e_ident);
void printElf_type(unsigned int e_type, unsigned char *e_ident);
void printElf_entry(unsigned long int e_entry, unsigned char *e_ident);
void closeElf(int elf);
void checkElf(unsigned char *e_ident);
void printElf_magic(unsigned char *e_ident);
void printElf_class(unsigned char *e_ident);
void printElf_data(unsigned char *e_ident);
void printElf_version(unsigned char *e_ident);
/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments
 * Return: 0 on success
 * Description: If the file is not
 * an ELF File or the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, rd;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closeElf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(o, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		closeElf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	checkElf(header->e_ident);
	printf("ELF Header:\n");
	printElf_magic(header->e_ident);
	printElf_class(header->e_ident);
	printElf_data(header->e_ident);
	printElf_version(header->e_ident);
	printElf_osabi(header->e_ident);
	printElf_abi(header->e_ident);
	printElf_type(header->e_type, header->e_ident);
	printElf_entry(header->e_entry, header->e_ident);

	free(header);
	closeElf(o);
	return (0);
}
/**
 * closeElf_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void closeElf_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * printElf_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void printEls_abi(unsigned char *e_ident)
{
	printf("  OS/ABI:     ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

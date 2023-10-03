#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void checkElf(unsigned char *e_ident);
void printElf_magic(unsigned char *e_ident);
void printElf_class(unsigned char *e_ident);
void printElf_data(unsigned char *e_ident);
void printElf_version(unsigned char *e_ident);
/**
 * checkElf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Description: If the file is not an ELF file - exit code 98.
 */
void checkElf(unsigned char *e_ident)
{
	int ind;

	for (ind = 0; ind < 4; ind++)
	{
		if (e_ident[ind] != 127 && e_ident[ind] != 'E' &&
		    e_ident[ind] != 'L' && e_ident[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * printElf_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Description: Magic numbers are separated by spaces.
 */
void printElf_magic(unsigned char *e_ident)
{
	int ind;

	printf("  Magic:   ");

	for (ind = 0; ind < EI_NIDENT; ind++)
	{
		printf("%02x", e_ident[ind]);

		if (ind == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * printElf_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void printElf_class(unsigned char *e_ident)
{
	printf("  Class:    ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * printElf_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void printElf_data(unsigned char *e_ident)
{
	printf("  Data:     ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * printElf_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void printElf_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

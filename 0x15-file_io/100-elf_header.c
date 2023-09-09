#include <elf.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void checkingElf(unsigned char *);
void printingMagic(unsigned char *);
void printingClass(unsigned char *);
void printingData(unsigned char *);
void printingVersion(unsigned char *);
void printingApi(unsigned char *);
void printingReadApi(unsigned char *);
void printingType(unsigned int, unsigned char *);
void printingEntry(unsigned int, unsigned char *);

/**
 * main - entry point
 * @argc: Number of parameters passed to it
 * @argv: Pointer to the strings passed to it
 *
 * Return: 0 or other things
*/

int main(int argc, char **argv)
{
	Elf64_Ehdr *myHeader;
	int myFileD;
	ssize_t copyVar;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "elf_header elf_filename");
		exit(98);
	}
	myFileD = open(argv[1], O_RDONLY);
	if (myFileD < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	myHeader = malloc(sizeof(Elf64_Ehdr));
	if (myHeader == NULL)
	{
		close(myFileD);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	copyVar = read(myFileD, myHeader, sizeof(Elf64_Ehdr));
	if (copyVar < 0)
	{
		free(myHeader);
		close(myFileD);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	checkingElf((*myHeader).e_ident);
	printingMagic((*myHeader).e_ident);
	printingClass((*myHeader).e_ident);
	printingData((*myHeader).e_ident);
	printingVersion((*myHeader).e_ident);
	printingApi((*myHeader).e_ident);
	printingReadApi((*myHeader).e_ident);
	printingType((*myHeader).e_type, (*myHeader).e_ident);
	printingEntry((*myHeader).e_type, (*myHeader).e_ident);
	if (close(myFileD) < 0)
	{
		dprintf(STDERR_FILENO, "Error can't close fd\n");
		exit(98);
	}
	free(myHeader);
	return (0);
}

/**
 * checkingElf - A function to check if the file
 * is elf or not
 * @e_ident: A Pointer to the bytes of the elf class
 *
 * Return: nothing
*/

void checkingElf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if ((*e_ident + i) != 127 && (*e_ident + i) != 'E' &&
				(*e_ident + i) != 'L' &&
				(*e_ident + i) != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not ELF file\n");
			exit(98);
		}
	}
	printf("ELF Header:\n");
}

/**
 * printingMagic - A function to print content
 * @e_ident: A Pointer to the bytes of the elf class
 *
 * Return: nothing
*/

void printingMagic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i <  EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * printingClass - A function to check class
 * @e_ident: A Pointer to the bytes of the elf class
 *
 * Return: nothing
*/

void printingClass(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASSNONE:
			printf("none\n");
			break;
	}
}

/**
 * printingData - A function to check data
 * @e_ident: A Pointer to the bytes of the elf class
 *
 * Return: nothing
*/

void printingData(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * printingVersion - A function to check version
 * @e_ident: A Pointer to the bytes of the elf class
 *
 * Return: nothing
*/

void printingVersion(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

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

/**
 * printingApi - A function to check osabi
 * @e_ident: A Pointer to the bytes of the elf class
 *
 * Return: nothing
*/

void printingApi(unsigned char *e_ident)
{
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
		case ELFOSABI_ARM:
			printf("ARM\n");
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
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
			break;
	}
}

/**
 * printingReadApi - A function to check the api
 * @e_ident: A Pointer to the bytes of the elf class
 *
 * Return: nothing
*/

void printingReadApi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * printingType - A function to print the type
 * @e_ident: A Pointer to the bytes of the elf class
 * @e_type: The number that is shifted to help
 * with endianness problem
 * Return: nothing
*/

void printingType(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type = e_type >> 8;
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core File)\n");
			break;
		default:
			printf("<unknown: %d>\n", e_type);
			break;
	}
}

/**
 * printingEntry - A function to print address of the header
 * @e_ident: A Pointer to the bytes of the elf class
 * @e_entry: Shifted number
 * Return: nothing
*/

void printingEntry(unsigned int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
		((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", e_entry);
	else
		printf("%#lx\n", (unsigned long int)e_entry);
}

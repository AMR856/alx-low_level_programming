#include <elf.h>

void checkingElf(unsigned char *);
void printingMagic(unsigned char *);
void printingClass(unsigned char *);
void printingData(unsigned char *);
void printingVersion(unsigned char *);
void printingApi(unsigned char *);
void printingMoreApi(unsigned char *);
void printingReadApi(unsigned char *);
void printingType(unsigned char *);
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
		dprintf(STDEER_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
}

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
}

void printingMagic(unsigned char *e_ident)
{
	int i;
	
	printf("  Magic:   ");
	for (i = 0; i <  EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EL_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

void printingClass(unsigned char *e_ident)
{
	printf("  Class:                             ");
	
	switch(e_ident[EI_CLASS])
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

void printingData(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			pritnf("2's complement, big endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
	}
}

void printingVersion(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EL_VERSION]);
	
	switch (e_ident[EL_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

void printingAbi(unsigned char *e_ident)
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
			printf("UNIX - Sun Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
		default:
			printingMoreAbi(&e_ident);
			break;
	}
}
void printingMoreAbi(unsigned char *e_ident)
{
	switch (e_ident[EL_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("UNIX - Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - BSD\n");
			break;
		case ELFOSABI_OPENVMS:
			printf("UNIX - VMS\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EL_OSABI]);
			break;
	}
}

void printingRealApi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}
void printingType(unsigned int e_type,unsigned char *e_ident)
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


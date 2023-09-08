#include <elf.h>

void checkingElf(unsigned char *);
void 
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

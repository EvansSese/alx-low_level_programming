#include "main.h"
/**
 * print_magic - Function to print magic
 * @ehdr: Elf header
 *
 * Return: Nothing
 */
void print_magic(Elf64_Ehdr ehdr)
{
	int i;

	printf("Magic:\t");
	for (i = 0; i < SELFMAG; i++)
	{
		printf("%02x ", ehdr.e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - Function to print class
 * @ehdr: Elf header file
 *
 * Return: Nothing
 */
void print_class(Elf64_Ehdr ehdr)
{
	printf("Class:\t");
	switch (ehdr.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid class\n");
			break;
	}
}

/**
 * print_data - Function to print data
 * @ehdr: Elf header
 *
 * Return: Nothing
 */
void print_data(Elf64_Ehdr ehdr)
{
	printf("Data:\t");
	switch (ehdr.e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid data encoding\n");
			break;
	}
}
/**
 * print_version - Function to print version
 * @ehdr: Elf header
 *
 * Return: Nothing
 */
void print_version(Elf64_Ehdr ehdr)
{
	printf("Version:\t %d\n", ehdr.e_ident[EI_VERSION]);
}
/**
 * print_os - Function to print OS
 * @ehdr: Elf header
 *
 * Return: Nothing
 */
void print_os(Elf64_Ehdr ehdr)
{
	printf("OS/ABI:\t");
	switch (ehdr.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("AIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("OpenBSD ABI\n");
			break;
		default:
			printf("Unknown ABI\n");
			break;
	}
}
/**
 * print_abi - Function to print ABI
 * @ehdr: Elf header
 *
 * Return: Nothing
 */
void print_abi(Elf64_Ehdr ehdr)
{
	printf("ABI Version:\t %d\n", ehdr.e_ident[EI_ABIVERSION]);
}
/**
 * print_type - Function to print type
 * @ehdr: Elf header
 *
 * Return: Nothing
 */
void print_type(Elf64_Ehdr ehdr)
{
	printf("Type:\t");
	switch (ehdr.e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
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
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Invalid file type\n");
			break;
	}
}
/**
 * print_entry - Function to print entry point
 * @ehdr: Elf header
 *
 * Return: Nothing
 */
void print_entry(Elf64_Ehdr ehdr)
{
	printf("Entry point address:\t 0x%08lx\n", ehdr.e_entry);
}

/**
 * main - Main function
 * @argc: Argument count
 * @argv: Arguments array
 *
 * Return: Returns 0 if successful, -1 otherwise
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	if ((fd = open(argv[1], O_RDONLY)) < 0)
	{
		perror("Open");
		exit(98);
	}
	if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error reading ELF header\n");
		exit(98);
	}
	if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "File is not an ELF file\n");
		exit(98);
	}
	print_magic(ehdr);
	print_class(ehdr);
	print_data(ehdr);
	print_version(ehdr);
	print_os(ehdr);
	print_abi(ehdr);
	print_type(ehdr);
	print_entry(ehdr);
	return (0);
}

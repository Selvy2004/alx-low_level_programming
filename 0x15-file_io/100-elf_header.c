#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 64

/**
 * print_elf_header - Prints the information contained in the ELF header
 * @header: Pointer to the ELF header
 */

void print_elf_header(unsigned char *header);
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
		exit(98);
	}

	ssize_t ret = read(fd, header, BUF_SIZE);

	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	if (ret != BUF_SIZE || header[0] != 0x7f || header[1] != 'E'
			|| header[2] != 'L' || header[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	print_elf_header(header);

	close(fd);
	return (0);
}
/**
 * print_elf_header - Prints the information contained in the ELF header
 * @header: Pointer to the ELF header
 */
void print_elf_header(unsigned char *header)
{
	printf("ELF Header:\n");
	printf("\tMagic:   ");
	for (int i = 0; i < 16; i++)
		printf("%02x ", header[i]);
	printf("\n");
	printf("\tClass:                             ELF%d\n",
			header[4] == 1 ? 32 : 64);
	printf("\tData:                              2's complement, %s endian\n",
			header[5] == 1 ? "little" : "big");
	printf("\tVersion:                           %d (current)\n", header[6]);
	printf("\tOS/ABI:                            UNIX - %s\n",
			header[7] == 0 ? "System V" : "Other");
	printf("\tABI Version:                       %d\n", header[8]);
	printf("\tType:                              ");
	switch (header[16])
	{
		case 1:
			printf("NONE (None)\n");
			break;
		case 2:
			printf("REL (Relocatable file)\n");
			break;
		case 3:
			printf("EXEC (Executable file)\n");
			break;
		case 4:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("<unknown: %d>\n", header[16]);
	}
	printf("\tEntry point address:               0x");
	for (int i = 24; i < 32; i++)
		printf("%02x", header[i]);
	printf("\n");
}


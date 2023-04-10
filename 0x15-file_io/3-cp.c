#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#ifndef BUFF_SIZE
#define BUFF_SIZE 1024
/**
 * main - Copies files
 * @argc: Argument
 * @argv: Second arg
 *
 * Return: Int
 */
int main(int argc, char *argv[])
{
	int fp_from, fp_to;
	char buff[BUFF_SIZE];
	ssize_t num_read;
	ssize_t num_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_from = open(argv[1], O_RDONLY);
	if (fp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fp_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((num_read = read(fp_from, buff, BUFF_SIZE)) > 0)
	{
		num_written = write(fp_to, buff, num_read);
		if  (num_written == -1 || num_written != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fp_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", fp_from);
		exit(100);
	}
	if (close(fp_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", fp_to);
		exit(100);
	}
	return (0);
}
#endif

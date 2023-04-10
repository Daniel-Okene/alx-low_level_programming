#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: count of argv
 * @argv: pointer to an array of pointer
 *
 * Return: respective error or succes code
 */
int main(int argc, char **argv)
{
	int count = 0, rfd, wfd, fd1, fd2;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: ./cp <file_from> <file_to>\n");
		return (97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}

	rfd = read(fd1, buf, 1024);
	if (rfd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	while (buf[count] != '\0')
		count++;

	wfd = write(fd2, buf, count);
	if (wfd < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}

	if (close(fd1))
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		return (100);
	}
	if (close(fd2))
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		return (100);
	}
	return (0);
}

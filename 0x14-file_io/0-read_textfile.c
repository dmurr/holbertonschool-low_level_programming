#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of letters to read
 *
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	int *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);

	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}

	close(fd);

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		return (0);
	}

	if (w < r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (w);
}

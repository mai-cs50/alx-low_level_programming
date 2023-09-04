#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Can't write to %s\n"
#define ERR_NOCLOSE "Can't close fd %d\n"
#define PERMISIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - copies the content of a file to another file.
 *
 * @cp: arg
 * @ar : arg
 *
 * Return: 1 or 0
*/
int main(int cp, char **ar)
{
	int c_fd = 0, p_fd = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (cp != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	c_fd = open(ar[1], O_RDONLY);
	if (c_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, ar[1]), exit(98);
	p_fd = open(ar[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISIONS);
	if (p_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, ar[2]), exit(99);
	while ((b = read(c_fd, buf, READ_BUF_SIZE)) > 0)
		if (write(p_fd, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, ar[2]), exit(98);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, ar[1]), exit(98);

	c_fd = close(c_fd);
	p_fd = close(p_fd);

	if (c_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, c_fd), exit(100);
	if (p_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, c_fd), exit(100);
	return (EXIT_SUCCESS);
}

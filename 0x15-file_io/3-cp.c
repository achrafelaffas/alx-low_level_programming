#include "main.h"

/**
* main - copies the content of a file to another file
* @argc: number of arguments passed to the program
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int fd_rd, fd_wr, r, a, b;
char buf[BUFSIZ];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_rd = open(argv[1], O_RDONLY);
if (fd_rd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((r = read(fd_rd, buf, BUFSIZ)) > 0)
{
if (fd_wr < 0 || write(fd_wr, buf, r) != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_rd);
exit(99);
}
}
if (r < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
a = close(fd_rd);
b = close(fd_wr);
if (a < 0 || b < 0)
{
if (a < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_rd);
if (b < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_wr);
exit(100);
}
return (0);
}


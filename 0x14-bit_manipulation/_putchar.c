#include <unistd.h>

/**
 * _putchar - write the character c to stout
 * @c: The char to print
 *
 * Return: on success 1
 * On error, -1 is returned
 */

int _putchar(c)
{
	return (write(1, &c, 1) == 1 ? (unsigned char)c : EOF);
}

#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 On success.
 * On error, -1 is returned, and errno is set correctly.
 */
int _putchar(char b)
{
	return (write(1, &b, 1));
}

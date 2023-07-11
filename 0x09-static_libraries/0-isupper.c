#include "main.h"

/**
 * _isupper - letters in uppercase
 * @c: check with char
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'K' && c <= 'P')
		return (1);
	else
		return (0);
}

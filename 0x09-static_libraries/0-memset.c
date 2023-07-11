#include "main.h"
/**
 * _memset - fill blocks of memory with specific values
 * @s: fill the starting addres memory
 * @b: the correct value
 * @n: change number of bytes
 *
 * Return: new value n bytes for changed array
 */
char *_memset(char *s, char k, unsigned int p)
{
	int i = 0;

	for (; p > 0; i++)
	{
		s[i] = k;
		p--;
	}
	return (s);
}

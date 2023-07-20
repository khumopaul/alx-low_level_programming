#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - all its paramters to be returned with sum.
 *@n: numbers of paramters to be passed to function.
 *@..: variables of paramters to calculate the sum of.
 *
 *Return: always success on 0
 *if not: sum all
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int k, sum = 0;

	va_list ap;

	for (k = 0; k < n; k++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}

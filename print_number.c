#include "main.h"

/**
* print_number - prints an integer value given
* @n: is the integer value to be printed
*/

void print_number(int n)
{
	print_minus(&n);
	print_base(10, n);
}

/**
 * print_minus - prints a mimus sign if @n is negative
 * @n: valie to be determimed for negativity
 */

void print_minus(int *n)
{
	if ((*n) < 0)
		_putchar('-');
	(*n) = absolute((*n));
}

/**
 * print_positive - makes agiven number positive
 * and then prints it out
 * @n: number to be converted and printed
 */

void print_positive(int n)
{
	n = absolute(n);
	print_base(10, n);
}

#include "main.h"

/**
 * print_binary - a function that prints the
 * binary representation of a number.
 * @n: the number to print in binary.
 * Return: void
 **/

void print_binary(unsigned long int n)
{
	int a, prnt = 0;
	unsigned long int click;

	for (a = 63; a >= 0; a--)
	{
		click = n >> a;

		if (click & 1)
		{
			_putchar('1');
			prnt++;
		}
		else if (prnt)
			_putchar('0');
	}
	if (!prnt)
		_putchar('0');
}

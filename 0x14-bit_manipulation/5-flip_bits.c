#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 * you would like to flip to get from another number.
 * @n: first number to be counted.
 * @m: second number to be counted.
 * Return: 0 if big, 1 if little.
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, flip = 0;
	unsigned long int curr;
	unsigned long int ano_num = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		curr = ano_num >> j;
		if (curr & 1)
			flip++;
	}

	return (flip);
}

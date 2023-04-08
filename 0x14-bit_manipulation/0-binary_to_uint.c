#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int.
 * @b: pointer a string of 0 and 1 chars.
 * Return: b if it is NULL or contains chars not 0 or 1 - 0.
 * Otherwise - the converted number.
 **/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int biry = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		biry = 2 * biry + (b[i] - '0');
	}

	return (biry);
}


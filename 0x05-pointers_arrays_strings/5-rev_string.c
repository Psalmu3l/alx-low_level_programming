#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */

void rev_string(char *s)

{
	int i = 0;

	int aux = 0;

	char tmp;

	while (*(s + i) != '\0')

		i += 1;
	i -= 1;

	while (aux < i)
	{
		tmp = s[i];
		s[i] = s[aux];
		s[aux] = tmp;
		aux++;
		i++;
	}
}

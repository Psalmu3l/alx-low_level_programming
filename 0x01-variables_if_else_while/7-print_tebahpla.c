#include <stdio.h>
/**
 * main - Printing alphabets backwords
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'z';

	while
		(c >= 'a') {
			putchar(c);
			c--;
		}
	putchar('\n');
	return (0);
}

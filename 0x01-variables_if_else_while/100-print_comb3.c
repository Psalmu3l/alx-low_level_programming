#include <stdio.h>
/**
 * main - Print 3 combinations
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ones = '0';

	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* print ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/* eliminate repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/* adds coma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
 */

int main(void)
{
	int a = 0, b = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}

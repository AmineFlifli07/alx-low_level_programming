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
	int tens;
	int ones;

	for (tens = '0'; tens <= '8'; tens++) /*print tens place*/
	{
		for (ones = '0'; ones <= '9'; ones++) /*print ones place*/
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '8' && ones == '9')) /*skip comma at end*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

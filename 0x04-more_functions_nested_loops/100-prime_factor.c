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

long a = 612852475143;
long b = 2;

while (a != 1)
{
	if (a % b == 0)
	{
		a = a / b;
		printf("%li", b);
	}
	else
	{
		b = b + 1;
	}
}
printf("\n");

return (0);
}

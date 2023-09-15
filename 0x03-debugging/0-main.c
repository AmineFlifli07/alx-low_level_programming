#include "main.h"

/**
*positive_or_negative - controls if i positive or negative
*@i: character to be verified
*Return: return 0 or 1
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i, is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%i, is negative\n", i);
	}
	else
	{
		printf("%i, is equal 0\n", i);
	}
}
/**
*main - always return 0
*Return: return 0
*/
int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);

	return (0);
}

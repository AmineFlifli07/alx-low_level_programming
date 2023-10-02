#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers
 * @argc : a parameter
 * @argv : b parameter
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc < 2)
	{
		printf("error");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult = mult * atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	return (0);
}

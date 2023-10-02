#include <stdio.h>

/**
 * main - print numbers
 * @argc : a parameter
 * @argv : b parameter
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

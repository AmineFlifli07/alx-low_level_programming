#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - print the name of the program
 * @size: Count arguments
 * @c: Arguments
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}

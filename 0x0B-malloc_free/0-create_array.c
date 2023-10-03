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
	int i = 0;

	a = malloc(sizeof(char) * size);
	while(i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}

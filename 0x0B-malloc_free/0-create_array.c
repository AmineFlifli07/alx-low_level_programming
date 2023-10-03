#include <stdio.h>
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
	return (malloc(sizeof(char) * size));
}

#include "main.h"
/**
 * _strlen - print numbers
 * @s : n parameter
 * Return: parameter i the lengt of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; *s++)
	{
		i++;
	}
return (i);
}

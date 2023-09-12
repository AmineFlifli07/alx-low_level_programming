#include "main.h"

/**
 * main - entry point
 *
 * Description: false or true validation
 *
 *print_alphabet - utilezes on the _putchar to print the alphabet
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}

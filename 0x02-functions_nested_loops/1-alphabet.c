#include "main.h"

/**
 *
 * print_alphabet - utilezes on the _putchar to print the alphabet
 *
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

#include "main.h"
/**
/bin/bash: line 1: q: command not found
 * @size: print size
 * Return: Always 0.
 */

void print_triangle(int size)

{


int i;
int z;
int d;
int p;

if (size > 0)
{
d = size - 1;
for (i = 0; i < size ; i++)
{
for (z = d; z > 0 ; z--)
{
putchar (' ');
}

for (p = 0; p <= i; p++)
{
putchar (35);
}

d--;

putchar ('\n');


}

}

else
{
putchar ('\n');
}
}

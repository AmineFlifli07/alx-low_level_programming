#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@buffer: pointer block of memory to fill
 *@a: value to set
 *@j: bytes of the memory
 *Return: dest
 */

char *_memset(char *buffer, char a, int j)
{

	 memset(buffer, a, j);
return (*buffer);
}

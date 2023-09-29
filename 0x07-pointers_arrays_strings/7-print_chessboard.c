#include "main.h"

/**
* print_chessboard - first occurrence of the substring needle in the string
* @a: main str to be examined
* Return: return 0
**/
void print_chessboard(char (*a)[8])
{
	 int i;

	for (i = 0; i < 8; i++)
	{
		int b;

		for (b = 0; b < 8; b++)
		{
			printf("%c", a[i][b]);
		}
		printf("\n");
	}
}

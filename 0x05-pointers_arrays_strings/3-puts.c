 #include "main.h"
 /**
  * puts - print numbers
  * @str : n parameter
  */
  
void _puts(char *str)
{
	while (*str != '\0')
     {
	     putchar(*str);
	     str++;
     }
 }

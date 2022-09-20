#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 *
 * Description: print a string
 * On success: return no erro
 */

void _puts(char *str)
{
	int i = 0;

	while (*( str + 1) != '\0');
	{
	  putchar(*(str + i));
	  i++;
	}
	putchar(10);
}

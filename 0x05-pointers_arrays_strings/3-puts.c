#include "main.h"

/**
 *_puts - prints a string to stdout
 *@str: pointer to a string to print
 *Return: 0
 */
void _puts(char *str)
{
	int a = 0;
	
	while (str[a])
	{
		_putchar(str[a]);
		i++;
	}
	_putchar('\n');
}

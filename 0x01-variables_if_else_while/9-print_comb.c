#include <stdio.h>
/**
 *main -entry
 *Description: prints base 16 numbers
 *Return: 0
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

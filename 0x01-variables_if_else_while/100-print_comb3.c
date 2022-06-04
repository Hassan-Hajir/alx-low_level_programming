#include<stdio.h>
/**
 *main- Entry
 *Description: prints out two digits in combinationa
 *Return: 0
 */
int main(void)
{
	int c;
	int i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < 1)
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

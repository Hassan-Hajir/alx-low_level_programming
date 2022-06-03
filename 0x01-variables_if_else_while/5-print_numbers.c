#include<stdio.h>
/**
*main - entry point
*Description: prints number 0 to 9
*Return: 0
*/
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}

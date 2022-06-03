#include<stdio.h>
/*
* main -  Entry point
*
* Description - outputs the alphabet in lowercase, followed by a new line
*
* Return - type (0)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
#include<unistd.h>
/*
*main - Entry point to the program
*Description: prints the alphabet in lowercase\n
*Return: 0 if sucessful or otherwise
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

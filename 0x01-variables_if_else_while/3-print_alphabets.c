#include <stdio.h>
#include <unistd.h>
/**
 *main -entry point
 *Description: prints alphabets in lowercases then uppercase
 *Return: 0 if successfull
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for  (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

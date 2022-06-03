#include <stdio.h>
#include <unistd.h>
/**
 *main -entry point
 *Description: prints alphabets in lowercases then uppercase
 *Return: 0 if successfull
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for  (ch = 'A'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

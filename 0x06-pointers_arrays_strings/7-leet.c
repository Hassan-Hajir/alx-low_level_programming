#include "main.h"

/**
 *leet - Encodes a string into 1337.
 *@str: The string to be encoded.
 *Return: A pointer dest
 */
char *leet(char *str)
{
	int x = 0, y;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[x])
	{
		for (y = 0; y <= 7; y++)
		{
			if (str[x] == leet[y] || str[x] - 32 == leet[y])
				str[x]  = y + '0';
		}
		x++;
	}
	return (str);
}

#include "main.h"
#include <stdio.h>

/**
 *cap_string - Capitalizes all words of a  string
 *@str: string which will be capitalized
 *Return: char value
 */
char *cap_string(char *str)
{
	int a = 0, i;
	int k = 13;
	char j[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[a])
	{
		i = 0;
		while (i < k)
		{
			if ((a == 0 || str[a - 1] == j[i]) && (str[a] >= 97 && str[a] <= 122))
				str[a] -= 32;
			i++;
		}
		a++;
	}
	return (str);
}

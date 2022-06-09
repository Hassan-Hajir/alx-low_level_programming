#include "main.h"

/**
 *_isupper - checks if  a character is  uppercase
 *@c: parameter
 *Return: 0 if successful
 */
int_isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

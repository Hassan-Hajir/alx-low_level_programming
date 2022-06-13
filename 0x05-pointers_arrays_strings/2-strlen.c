include "main.h"

/**
 *_strlen -checks the length of the string
 *@s: sting for checking
 *Return: length of string if integer type
 **/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		return (i);
}

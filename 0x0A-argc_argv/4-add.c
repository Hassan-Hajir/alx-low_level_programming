#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main -takes in integer arguments and returns the sum
 *@argc: Number of arguments
 *@argv: Arrayb of chars
 *Return: 0 or otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

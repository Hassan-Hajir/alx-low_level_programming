#include <stdio.h>
#include "main.h"

/**
 *main - print the number of arguments passed to main
 *@argc: Number of arguments
 *@argv: Arrey of Arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}

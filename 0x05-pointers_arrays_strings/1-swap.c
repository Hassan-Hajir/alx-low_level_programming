#include "main.h"

/**
 * swap_int - swaps the values of two integer a and b
 *@a: pointer 1
 *@b: pointer 2
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 *find_sqrt - Finds square root of an number.
 *@num: number to squared.
 *@root: tested root
 *Return: evaluate the squre root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
/**
 *_sqrt_recursion - Returns square root of a number.
 *@n: number to return the square root.
 *Return: square root recursive
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}

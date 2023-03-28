#include "main.h"

/**
 *print_array - a function that prints n elements
 *@a: array name
 * @n: the number of elemnet s to be printed in an array
 *return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d,", a[n - 1]);
	}
	printf("\n");
}

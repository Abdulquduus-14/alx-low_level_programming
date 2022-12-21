#include "main.h"
/**
 * reverse_array: reverses the content of an array of integers.
 *
 * Return: void
 * @a: int * parameter
 * @n: number of elements to reverse
 */

void reverse_array(int *a, int n)
{
	int i, k;

	i = 0;
	k = n - 1;
	while (i < n)
	{
		*(a + i) = *(a + k);
		i++;
		k--;
	}
}

#include "main.h"
#include <stdio.h>
/**
 * print_diagsums: prints the sum of the two diagonals 
 * f a square matrix of integers.
 * Return: void
 * @a: int pointer
 * @size: int parameter
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	unsigned int total;
	unsigned int sum;

	total = 0;
	sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				total += *((int *)a + (i * size) + j);
			else if (i + j == size - 1)
				sum += *((int *)a + (i * size) + j);
		}
	}
	printf("%u, ", total);
	printf("%u", sum);
	printf("\n");
}

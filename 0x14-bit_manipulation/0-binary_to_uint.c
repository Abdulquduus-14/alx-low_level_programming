#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted numberfor success, else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum;

	sum = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		sum <<= 1;
		if (b[i] == '1')
			sum += 1;
		else
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
		}
	}
	return (sum);
}

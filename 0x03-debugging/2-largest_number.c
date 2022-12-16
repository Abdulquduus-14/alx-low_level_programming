#include "main.h"
#include <stdio.h>
/**
 * main: prints the largest of three integers
 * Return: 0 for success
 */

/**
 *
 *  * largest_number - returns the largest of 3 numbers
 *
 *   * @a: first integer
 *
 *    * @b: second integer
 *
 *     * @c: third integer
 *
 *      * Return: largest number
 *
 *       */
/**
 * int main(void)
{
	int a, b, c, l;

	a = 2;
	b = 5;
	c = 6;
	l = largest_number(a, b, c);
	printf("%d is the largest number\n", largest);

	return (0);
} */


int largest_number(int a, int b, int c)
{
	int largest;

	largest = a;

	if (b > largest)
		largest = b;
	else if (c > largest)
		largest = c;

	return (largest);

}

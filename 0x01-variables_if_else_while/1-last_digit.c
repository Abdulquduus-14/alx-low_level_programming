#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main: print the last digit of the number stored in the variable n.
 *
 * Return: 0 for success
 * @n: int
 */
/* betty style doc for function main goes there */

int main(void)

{

	int n;
	int i;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	i = n % 10;

	printf("Last digit of %d is %d ", n, i);
	if (i > 5)
		printf("and is greater than 5\n");
	else if (i == 0)
		printf("and is 0\n");
	else if ((i < 6) && (i != 0))
		printf("and is less than 6 and not 0\n");

	return (0);

}

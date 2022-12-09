#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main: assign a random number to n each time
 * it is executed. If the number is greater than 0:
 * is positive; if number is zero: is zero;
 * if the number is less than 0:
 * is negative
 *
 * Return: 0 if success
 */
int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
/* your code goes there */

return (0);

}

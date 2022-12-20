#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main: program entry point
 *
 * Return: 0 for success, non-zero otherwise
 */
int main(void)
{
	int i;
	char *p;


	srand(time(0));

	for (i = 0; i < 25; i++)
	{
		*p =  rand() % 255;
		p++;
	}

	return (0);
}

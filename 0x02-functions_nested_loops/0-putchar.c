#include <stdio.h>
#include "main.h"
/**
 * main: program entering point
 *
 * Return: 0 for success
 */

int main(void)
{
	char a[] = "_putchar";
	int j;

	j = 0;

	while (a[j] != '\0')
	{
		_putchar(a[j]);
		j++;
	}
	_putchar('\n');

	return (0);
}

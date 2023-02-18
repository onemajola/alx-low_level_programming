#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
* main - Print all base 10 single digit numbers from 0
* Return: Always 0 (Success)
*/

int main(void)

{

	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');

	return (0);
}

#include <stdlib.h>

#include <stdio.h>

#include <time.h>

/**
* main - Print base16
* Return: Always 0 (Success)
*/

int main(void)

{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}

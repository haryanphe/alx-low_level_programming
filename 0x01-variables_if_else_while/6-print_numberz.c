#include <stdio.h>
/**
 * main - Print all single digit of base 10 numbers using putchar
 * Return : 0
*/
int main(void)
{
	int num;

		for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
		putchar('\n');
	return (0);

i}

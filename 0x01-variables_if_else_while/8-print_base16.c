#include <stdio.h>
/**
 * main - print all the numbers in base 16 in lower case and a new line
 * Return : 0
*/
int main(void)
{
	int num;
	char lc;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}
		putchar('\n');
	return (0);
}

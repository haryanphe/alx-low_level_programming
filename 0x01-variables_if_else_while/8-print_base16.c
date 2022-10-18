#include <stdio.h>
/**
 * main - print all the numbers in base 16 in lower case and a new line
 * Return : 0
*/
int main(void)
{
	int num;
	char lc;

	for (num = 0; num < 16; num++)
	{
		putchar((num % 16) + '0');
	}
	for (lc = 'a'; lc <= 'p'; lc++)
	{
		putchar(lc);
	}
		putchar('\n');
	return (0);
}

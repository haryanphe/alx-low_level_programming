#include <stdio.h>
/**
 * main - print lower case alphabet in reverse order
 * Return : 0
*/
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
		putchar('\n');
		return (0);
}

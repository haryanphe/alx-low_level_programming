#include <stdio.h>
/**
 * main - prints alphabet in lower and upper case
 * return : 0
 */
int main(void)
{	char vb;
	char UC;

	for (vb = 'a'; vb <= 'z'; vb++)
	{
		putchar(vb);
	}
	for (UC = 'A'; UC <= 'Z'; UC++)
	{
		putchar(UC);
	}
	{
		putchar('\n');
	}
	return (0);
}

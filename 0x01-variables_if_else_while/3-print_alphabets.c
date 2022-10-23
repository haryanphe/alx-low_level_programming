#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
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

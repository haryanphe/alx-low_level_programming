#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		putchar(',');
		if (num != 9)
		{
			putchar(num);
		}
		{
			putchar(' ');
		}
		putchar('\n');
	}
		return (0);
}

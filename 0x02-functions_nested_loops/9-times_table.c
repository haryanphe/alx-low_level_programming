#include "main.h"
/**
 * times_table - check the code
 * Return: Always 0.
 */
void times_table(void)
{
	int rows = 0;
	int columns = 0;
	int prin_num = 0;

	for (; rows <= 9; rows++)
	{
		for (columns = 0; columns <= 9; columns++)
		{
			prin_num = rows * columns;

			if (prin_num < 10)
			{
				_putchar(prin_num + '0');
			}
			else
			{
				_putchar(((prin_num / 10) % 10) + '0');
				_putchar((prin_num % 10) + '0');
			}
			if (columns != 9)
			{
				_putchar(',');
				if (prin_num < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
			if (columns == 9)
				_putchar('\n');
		}
	}
}

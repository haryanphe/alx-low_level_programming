#include "main.h"
/**
 * jack_bauer - check the code
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	for (; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			else
			{
				_putchar(((hour / 10) % 10) + '0');
				_putchar((hour % 10) + '0');
			}
			_putchar(':');

			if (min < 10)
			{
				_putchar('0');
				_putchar(min + '0');
			}
			else
			{
				_putchar(((min / 10) % 10) + '0');
				_putchar((min % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

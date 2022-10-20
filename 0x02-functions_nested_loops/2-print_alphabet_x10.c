#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* Return: 0
*/
int main(void)
{
	int xo;
	int xi;

	for (xi = '1'; xi <= '9'; xi++)
		for (xo = 'a'; xo <= 'z'; xo++)
			_putchar(xo);
	_putchar('\n');
	return (0);
}

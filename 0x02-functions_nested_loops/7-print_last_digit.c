#include "main.h"
/**
 * _abs - check the code
 * @n: int
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
/**
 * print_last_digit - check the code
 * @n: int
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	_putchar(_abs(n % 10) + '0');
	return (_abs(n % 10));
}

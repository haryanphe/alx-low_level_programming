#include "main.h"
/**
 * _isdigit - check if c is a digit
 * @c: int
 * Return: 1 if c is a digit or return 0
 */
int _isdigit(int c)
{
	int a = 0;

	if (c >= '0' && c <= '9')
		a = 1;
	return (a);
}

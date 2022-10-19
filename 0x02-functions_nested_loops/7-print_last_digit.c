#include "main.h"

/**
 * print_last_digit-prints the last digit of an integer.
 *
 * @n:number to compute last digit.
 *
 * Return:last Digit.
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}

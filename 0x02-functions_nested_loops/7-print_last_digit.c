#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @nld: number's last digit result
 * Return: The last digit
 */

int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}

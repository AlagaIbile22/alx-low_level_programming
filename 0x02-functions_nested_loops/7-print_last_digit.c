#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n(* -1);

	_putchar((n % 10) + '0');

	return (n % 10);
}

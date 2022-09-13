#include "putchar.h"

/**
 * main - print Putchar, followed by a new line
 * Return: 0
 */

int main(void)
{
	char *sh = "Putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++
	}
	_putchar('\n');

	return (0);
}

#include "stdio.h"
/**
 * main - print Putchar, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}

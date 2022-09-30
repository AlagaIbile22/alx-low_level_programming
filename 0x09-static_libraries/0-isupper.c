#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: character to check
 *
 * Return: 1 for uppercase letter, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

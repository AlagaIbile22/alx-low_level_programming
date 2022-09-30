#include <stdio.h>
#include "main.h"

/**
 * main - print the number of the argument passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

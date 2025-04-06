#include "main.h"
/**
 *
 * main - to check the code
 * print_line -
 * Return: return 0
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 1)
	{
		_puchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		_puchar('_');
	}
	_puchar('\n');
	}
}


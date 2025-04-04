#include "main.h"
/*
 *print_number - print numer
 *_purchar - print a single char
 *@i: it is the int value
 * Return: alweys 0
 */
void print_numbers(void)
{
	int i;
		for (i = '0'; i <= '9'; i++)
		{
			_puchar(i);
		}
	_puchar('\n');
}

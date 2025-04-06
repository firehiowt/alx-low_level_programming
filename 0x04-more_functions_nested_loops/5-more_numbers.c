#include "main.h"

/**
 *
 * more_numbers - print numbrt to 14
 * _putchar - to print the j value
 * @i: the value of loop
 * @j: print the number
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)

	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
			
			_puchar(j / 10 + '0');
			}
			_puchar(j % 10 + '0');
			}
	
		_puchar('\n');
	}
}


#include "main.h"
/**
 * print_integer - prints numbers
 * @number: number to display
 */
void print_integer(int number)
{
	while (number != 0)
	{
		_putchar('0' + number % 10);
		number = number / 10;
	}
}

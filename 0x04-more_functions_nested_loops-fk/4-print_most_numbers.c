#include "main.h"
/**
 * print_most_numbers - print nos except 2 and 4
 * return : returns nothing
 */
void print_most_numbers(void)
{
	int number;
	for (number = 48; number < 58; number++)
{
	if ((number == 50) || (number == 52))
{
	continue;
}
	_putchar(number);
}
	_putchar(10);
}

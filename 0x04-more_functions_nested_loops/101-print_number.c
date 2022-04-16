#include "main.h"
/**
 * print_number : print a number
 *
 * Return: 0
 */
void print_number(int n)
{
	unsignef int num = n;
	if (n < 0)
{
	_putchar('-');
	num = -num;
}
	if (num > 9)
{
	print_number(num / 10);
}
	_putchar(num % 10 + '0');
}

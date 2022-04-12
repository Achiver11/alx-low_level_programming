#include "main.h"
/**
 * print alphaber - print alphabets lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c = 'a';

while (c <= 'z')
{
	_putchar(c);
	c++;
}
	_putchar('\n');
}

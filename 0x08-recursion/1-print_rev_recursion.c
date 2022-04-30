#include "main.h"

/**
 * _print_rev_recursion - prit a string in reverse
 * @s : string ti be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}

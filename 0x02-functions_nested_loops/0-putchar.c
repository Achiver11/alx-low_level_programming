#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char samu[] = "_putchar";

	int c;
	for (c = 0; c < 8; c++;)
	{
	_putchar(samu[c]);
	}
	_putchar('\n');
	return (0);
}

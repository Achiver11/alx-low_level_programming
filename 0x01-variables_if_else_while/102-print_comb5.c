#include <stdio.h>

/**
 * main - to print all possible combo of two two-digit numbers
 *
 * Return : 0 if successful
 */

int main(void)
{
	int digit1 = 0;
	int digit2, digit3, digit4;

	while (digit1 < 10)
{
	for (digit2 = 0; digit2 < 9; digit2++)
{
	for (digit3 = digit1; digit3 < 10; digit3++)
{
	for (digit4 = digit2 + 1; digit4 < 10; digit4++)
{
	putchar((digit1 % 10) + '0');
	putchar((digit2 % 10) + '0');
	putchar(32);
	putchar((digit3 % 10) + '0');
	putchar((digit4 % 10) + '0');

if (digit1 == 9 && digit2 == 9 && digit3 == 9 && digit4 == 9)
{
	break;
}
else
{
	putchar(44);
}
}
}
}
	digit1++;
}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 *
 * return : always zero (success)
 */

int main(void)
{
	char lower_case;
	char upper_case;
for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
	putchar(lower_case);
}
for (upper_case = 'A'; upper_case <= 'z'; upper_case++)
{
	putchar(upper_case);
}
	putchar('\n');
	return (0);
}
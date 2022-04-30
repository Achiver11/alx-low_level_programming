#include "main.h"

int find_prime(int a, int b);

/**
 * is_prime_number - says if prime or not
 * @n : number to evaluate
 * Return : n if prime , 0 if otgerwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (find_prime(n, n - 1));
}
int find_prime(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0 && b > 0)
		return (0);
	return (find_prime(a, b - 1));
}

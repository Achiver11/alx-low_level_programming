#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry poibt
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* my code goes from here */
	l = (n % 10);
	if (l > 5)	
{
	printf("Last digit of %l is %l and is greater than 5\n", n, l);
}
	else if (l == 0)
{
	printf("Last digit of %l is %l and is 0\n", n, l);
}
	else
{
	printf("Last digit of %l is %l and is less than 6 and not 0\n", n, l);
}
	return (0);
}

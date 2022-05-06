#include <stdio.h>
/**
 * main - program that print only no 
 * or fizz or buzz or fizzbuzz
 *
 * Return : 0
 */
int main(void)
{
	int num;
	while (num++ < 100)
	if ((num % 3 == 0) && (num % 5 == 0))
		printf("FizzBuzz");

	else if ((num % 3) == 0)
	printf("Fizz");

	else if ((num % 5) == 0)
{
	if (num != 100)
	printf("Buss");

	else
	printf("Buss");
}
	else
	printf("%d", num);

	printf("\n");

	return (0);
}

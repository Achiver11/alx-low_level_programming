#include "main.h"
/**
 * _isalpha - check for lowercase
 * parameter or member k
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c > 97 && c <= 122) || (c >= 65 && c <= 90));
}

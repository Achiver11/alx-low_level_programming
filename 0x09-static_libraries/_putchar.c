#include <unistd.h>

/**
 * _putchar - writes
 * @c : character to print
 * return : 0 on success
 * Error : -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

int _print_last_digit(int n)
{
	
	int l;
	int any;	
l = any % 10;
if (l < 0)
l = l *-1;
_putchar(l + '0');
return (l);
}

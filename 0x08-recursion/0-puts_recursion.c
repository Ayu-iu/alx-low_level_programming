#include"main.h"

/*
 * lets write a fun printing a string
 * @s: character string to print
 *
 *
 * Retur: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s +1);
}

#include "main.h"

/**
 * _print_rev_recursion - prints z string in rev
 * @s: string to be printed in reverse
 * Return as always void -_-
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
_putchar(*s);
}

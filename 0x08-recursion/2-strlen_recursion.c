#include "main.h"

/**
 * _strlen_recursion - returns the length of certain rec ^_^
 * @s: string to length is to be calculated of
 * Return: obv the length of z string
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

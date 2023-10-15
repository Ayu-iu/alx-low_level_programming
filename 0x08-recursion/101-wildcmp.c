#include "main.h"

/**
 * wildcmp - compares 2 strings and returns 1 if they're identical
 * otherwise return 0
 * @s1: the first string to compare
 * @s2: the second string to comp
 * Return: 1 if string is identical, 0 otherwise
*/

int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1);
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
return (1);
return (wildcmp(s1, s2 + 1));
}
if (*s1 == '\0')
return (*s2 == '\0');
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}

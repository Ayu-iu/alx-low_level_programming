#include "main.h"

/**
 * _strlen_recursion - Computes the length of a string recursively
 * @s: the string to compute the length of
 * Return: The length of the string
*/

int is_palindrome(char *s)
{
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - i - 1])
        {
            return (0);
        }
    }
    
}

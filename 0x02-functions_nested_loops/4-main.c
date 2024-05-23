#include "main.h"
#include <stdio.h>

/**
 * main - tests the _isalpha function
 *
 * Return: 0 if successful
 */
int main(void)
{
    char c;
    for (c = 'A'; c <= 'z'; c++)
    {
        printf("%c: %d\n", c, _isalpha(c));
    }
    return (0);
}


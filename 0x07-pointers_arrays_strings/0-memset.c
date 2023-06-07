#include<stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte to fill memory with
 * @n: number of bytes to fill
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return 0;
}

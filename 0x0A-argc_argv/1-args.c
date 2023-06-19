#include<unistd.h>
#include"main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int count = argc - 1;
    int i;

    _putchar(count + '0');
    _putchar('\n');

    /* Print out the command-line arguments */
    for (i = 0; i < argc; i++) {
        _puts(argv[i]);
        _putchar('\n');
    }

    return (0);
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * _puts - Writes a string to stdout
 * @str: The string to be written
 *
 * Return: The number of characters written
 */
int _puts(char *str)
{
    int len = 0;

    while (*str != '\0') {
        _putchar(*str);
        str++;
        len++;
    }

    return (len);
}

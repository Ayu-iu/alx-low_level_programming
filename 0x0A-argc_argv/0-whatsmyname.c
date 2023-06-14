#include <unistd.h>
#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: The string to be printed
 */

void _puts(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
        {
                _putchar(str[i]);
        }
        _putchar('\n');
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		_puts(argv[i]);
	}
	return (0);
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

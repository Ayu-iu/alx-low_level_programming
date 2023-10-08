#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the num of command-line arguments
 * @argv: An array of command-line argument strings
 * 
 * Return: Always 0
*/

int main(int argc, char *argv[])
{ 
    int i = 0;

    (void)argc;

    while (argv[0][i] != '\0')
    {
        putchar(argv[0][i]);
        i++;
    }
    putchar('\n');
    return (0);
}
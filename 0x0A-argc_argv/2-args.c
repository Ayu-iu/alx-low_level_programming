#include "main.h"

/**
 * main - prints all args passed into the program
 * @argc: num of cmd args duh
 * @argv: an array of cmd arg strings
 * 
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}

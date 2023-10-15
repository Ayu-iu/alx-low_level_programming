#include "main.h"
#include <stdio.h>

/**
 * main - prints the num of args passed into z program
 * @argc: the num of comandline args
 *
 * Return: as always 0
 */

int count_arguments(int argc) {
    return (argc - 1);
}

int main(int argc, '\0') 
{
    printf("%d\n", count_arguments(argc));
    return (0);
}
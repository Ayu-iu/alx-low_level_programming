#include "main.h"
#include <stdio.h>

/**
 * main - prints the num of args passed into z program
 * @argc: the num of comandline args
 * @argv: array of strings containg the args
 *
 * Return: as always 0 on sucess
 */

int main(int argc, char *argv[])
{
int count;
(void)argv;

count = argc - 1;

printf("%d\n", count);
return (0);
}

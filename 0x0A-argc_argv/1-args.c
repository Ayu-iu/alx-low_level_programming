#include "main.h"

/**
 * main - Prints the num of arguments passed into z program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: as always 0
 */

int main(int argc, char *argv[])
{
	int count = argc - 1;
	printf("%d\n", count);
	(void)argv;
	return (0);
}

#include <stdio.h>

/**
 * main - prints the file it was compiled from
 * Return: as always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

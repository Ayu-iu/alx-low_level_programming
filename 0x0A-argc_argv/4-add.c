#include "main.h"

/**
 * main - adds +ve nums
 * @argc: the num of cmd args
 * @argv: the array of cmd arg strings
 * 
 * Return: 0 if sucess, 1 if not\error
*/

int main(int argc, char *argv[])
{
    int i, num = 0;

    for (i = 1; i < argc; i++)
    {
        if (!is_positive_number(argv[i]))
        {
            printf("Error\n");
            return (1);
        }

        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);

    return (0);
}

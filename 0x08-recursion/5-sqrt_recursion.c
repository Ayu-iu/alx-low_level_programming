#include "main.h"

/**
 * _sqrt_helper - helper function for computing sqrt of a num
 * @n: the num its sqer is supposed to be returned of
 * @low: the lowest possible sqrt of n
 * @high: the highest possible sqrt of n
 * 
 * Return: -1 if n doesn't have natural sqrt, else its natural sqrt
*/

int _sqrt_helper(int n, int low, int high)
{
    int mid = (low + high) / 2;

    if (low > high)
    {
        return (-1);
    }
    if (mid * mid == n)
    {
        return (mid);
    }
    else if (mid * mid < n)
    {
        return (_sqrt_helper(n, mid + 1, high));
    }
    else 
    {
        return (_sqrt_helper(n, low, mid - 1));
    }
}

/**
 * _sqrt_recursion - returns the natural sqrt of a num
 * @n: num its sqrt to be returned of
 * 
 * Return: -1 if n doesn't have natural sqrt, else its natural sqrt
*/

int _sqrt_recursion(int n)
{
    if ( n < 0)
    {
        return (-1);
    }
    return (_sqrt_helper(n, 0, n));
}
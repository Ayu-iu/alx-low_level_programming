#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqrt of a num
 * @n: the num its sqrt is supposed to be returend of
 *
 * Return: -1 if n doesn't have natural sqrt, else its natural sqrt
 */

int _sqrt_recursion(int n)
{
	int start = 1;
	int end = n / 2;
	int result = _sqrt_recursion(n, start, end);
	int mid = (start + end) / 2;

	if (n < 0){
		return -1;
	}
	if (n == 0 || n == 1){
		return (n);
	}
	if (mid * mid == n){
		return mid;
	}
	if (start >= end){
		return -1;
	}
	if (mid * mid > n){
		return _sqrt_recursion(n, start, mid - 1);
	}
	return _sqrt_recursion(n, mid + 1, end);
}

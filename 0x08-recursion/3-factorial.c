#include "main.h"

/**
 * factorial - this returns the factorial of any given number
 * @n: the number we find the factorial of
 * Return: Always 0
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}

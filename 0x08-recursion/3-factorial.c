#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number to find the factorials of
 * Return: 0 on success and 1 on error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

#include "main.h"
#include <stdio.h>
/**
 * check_prime - checks for prime numbers
 * @n: the number
 * @n2: the number - 1. canges based on recursive calls
 * Return: 0 if not prime and 1 if prime
 */
int check_prime(unsigned long int n, unsigned long int n2)
{
	int j;

	j = 1;

	if (n2 > 1 && n2 != n)
	{
		if (n % n2 == 0)
		{
			return (0);
		}
		j = check_prime(n, n2 - 1);
	}
	return (j);
}
/**
 * is_prime_number - checks if a number is prime. main function
 * @n: the number to work on
 * Return: 0 if not prime, 1 if prime,
 */
int is_prime_number(int n)
{
	unsigned long int n1 = n;
	unsigned long int n2 = (n - 1);

	if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	if (n > 1000)
		n2 = n / 2;
	return (check_prime(n1, n2));
}

#include <stdio.h>
#include <math.h>

/**
 * is_prime - to check if the number is a prime number
 * @t: the number to be tested
 * Return: Returns 1 if prime and 0 if not
 */
int is_prime(int t);
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0.
 */
int main(void)
{
	int test = 612852475143;

	int i;

	int j = 0;

	int primeArray[9999999999999999999999];

	for (i = 0; i < test; i++)
	{
		if (test % i == 0 && is_prime(i) == 1)
		{
			primeArray[j] = i;
			j++;
		}
		else
		{
			continue;
		}
	}
	int f;

	for (f = 0; f < 130000; f++)
	{
		printf("%d", primeArray[f]);
	}

	return (0);
}

int is_prime(int t)
{
	if (t < 2)
	{
		return (0);
	}
	else if (t == 2)
	{
		return (1);
	}
	else if (t % 2 == 0)
	{
		return (0);
	}
	int sqrt_t = (int) sqrt(t);

	int i;

	for (i = 3; i <= sqrt_t; i += 2)
	{
		if (t % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

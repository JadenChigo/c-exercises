#include <stdio.h>

/**
 * main - entry point
 * @n: the number taken from user
 * @
 */
int factorial(int n);

int main(void)
{
	int number;
	int result;

	scanf("%d", &number);
	result = factorial(number);

	printf("%d", result);
}
int factorial(int n)
{
	if ( n > 0)
	{
		return n * factorial( n - 1);
	}
	else
	{
		return 1;
	}
}

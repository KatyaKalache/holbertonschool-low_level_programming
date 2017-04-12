#include <stdio.h>

int main(void)
{
	unsigned long int prime;
	unsigned long int n;

	prime = 2;
	n = 612852475143;

	while (n > prime)
	{
		if (n % prime == 0)
		{
			n /= prime;
		}
		else
		{
			prime++;
		}
	}
	printf("%lu\n", prime);
	return(0);
}

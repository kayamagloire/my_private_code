#include <stdio.h>

/**
 * main - Test 5
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10 )
	{
		printf("%d", i % 2);
		i++;
	}
	printf("\n");
	return (0);
}

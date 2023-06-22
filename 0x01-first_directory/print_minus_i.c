#include <stdio.h>

/**
 * main - Test 4
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	i = -9;
	while (i < 0)
	{
		printf("%d", -i);
		i++;
	}
	printf("\n");
	return (0);
}

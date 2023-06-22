#include <stdio.h>

/**
 * main - Multiplication is a program that multiplies 2 int
 * x and y and produce z
 * Return: 0 (success)
 */

/* Function declaration */

int multiply(int x, int y);

/* Main function */

int main(void)
{
	int x = 10;
	int y = 2;
	int z = multiply(x, y);

	printf("The result is %d", z);
	printf("\n");
	return (0);
}

/* Function definition */

int multiply(int x, int y)
{
	return (x * y);
}

#include "_Shell.h"

/**
 * int num1 = 5;
 * int num2 = 10;
 * Return: 0 on success, 1 on error
 * This program calculates the sum of two numbers.
 */

int main(void)
{

	int num1 = 5;
	int num2 = 10;
	int sum = num1 + num2;

	char buffer[50];
	int length = sprintf(buffer, "The sum of %d and %d is: %d\n",
			 num1, num2, sum);

	write(1, buffer, length);

	return (0);
}

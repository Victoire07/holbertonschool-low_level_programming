#include <stdio.h>
/**
 * main - Write a program
 *
 * Description: Write a program that prints the numbers from 1 to 100
 * Multiples of three : print Fizz instead of the number
 * Multiples of five : print Buzz instead of the number
 * Multiples of both three and five print FizzBuzz
 * Each number or word should be separated by a space
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1 ; num  <= 100; num++)
	{
	if (num % 3 == 0 && num % 5 == 0)
		printf("FizzBuzz");
	else if (num % 3 == 0)
		printf("Fizz");
	else if (num % 5 == 0)
		printf("Buzz");
	else
		printf("%d", num);
	if (num != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}


#include <stdio.h>
#include "main.h"

/**
 * main -function that prints all the result of multiplication
 * followed by a new line
 * @argc: number of arguments
 * @argv: array of argumes
 * Return: return 0 0r 1
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	printf("Error\n");
	return (1);
}

#include <stdio.h>
#include "main.h"

/**
 * main -function that prints all  arguments receives
 * followed by a new line
 * @argc: number of arguments
 * @argv: array of argumes
 * Return: Always 0 (Success)
 */
int main(int argc, int *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}

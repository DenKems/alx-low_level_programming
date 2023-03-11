#include <stdio.h>
#include "main.h"

/**
 * main -function that prints the number of arguments passed
 * followed by a new line
 * @argc: number of arguments
 * @argv: array of argumes
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /* ignore argv */

	printf("%d\n", argc - 1);
	return (0);
}

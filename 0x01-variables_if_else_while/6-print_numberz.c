#include <stdio.h>

/**
 * main - prints all single digits of base 10 using putchar only
 * Return: 0 (Success)
 */
int main(void)
{
	int _63;

	for (_63 = 0; _63 < 10; _63++)
	{
		putchar((_63 % 10) + '0');
	}
	putchar('\n');
	return (0);
}

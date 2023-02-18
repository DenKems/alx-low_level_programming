#include <stdio.h>

/**
 * main - prints numbers in base hexadecinal, base 16
 * Return: 0 (Success)
 */
int main(void)
{
	int hex;
	char by;

	for (hex = 0; hex < 10; hex++)
	{
		putchar((hex % 10) + '0');
	}

	for (by = 'a'; by <= 'f'; by++)
	{
		putchar(by);
	}
	putchar('\n');
	return (0);
}

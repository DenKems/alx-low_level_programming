#include <stdio.h>

/**
 * main - prints alphabets in reverse order
 * Return: 0 (Success)
 */
int main(void)
{
	char z2a;

	for (z2a = 'z'; z2a >= 'a'; z2a--)
	{
		putchar(z2a);
	}
	putchar('\n');
	return (0);
}

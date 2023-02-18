#include <stdio.h>

/**
 * main- prints alphabets in upper and lower cases
 * Return: 0 (Success)
 */
int main(void)
{
	char alPH;

	for (alPH = 'a'; alPH <= 'z'; alPH++)
	{
		putchar(alPH);
	}
	for (alPH = 'A'; alPH <= 'Z'; alPH++)
	{
		putchar(alPH);
	}
	putchar('\n');
	return (0);
}

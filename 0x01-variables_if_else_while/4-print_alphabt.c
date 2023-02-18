#include <stdio.h>

/**
 * main - print lowercase alphabets omitting q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
			putchar(al);
	}
	putchar('\n');
	return (0);
}

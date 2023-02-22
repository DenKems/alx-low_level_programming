#include "main.h"

/**
* _isalpha - This program checks for alphabet charcter
* @c: This the charcter
* Return: Returns 1 if Lower or Uppercase letters
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

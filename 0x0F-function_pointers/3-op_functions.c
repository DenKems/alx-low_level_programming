#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - functions add two integer values
* @a: first value
* @b: second value
* Return: returns sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - functions find the difference of two integer values
* @a: first value
* @b: second value
* Return: returns difference between  a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - functions multiplies two integer values
* @a: first value
* @b: second value
* Return: returns product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - function divides two integer values
* @a: first value
* @b: second value
* Return: returns quotient of a divided by b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - function divides two integers and returns the remainder
* @a: first value
* @b: second value
* Return: returns remainder of a divided by b
*/
int op_mod(int a, int b)
{
	return (a % b);
}

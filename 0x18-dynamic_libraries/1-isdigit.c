#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: c - variable
 * Return: 0(success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

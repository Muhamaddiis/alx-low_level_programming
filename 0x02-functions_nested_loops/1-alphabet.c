#include "main.h"

/**
 * print_alphabet- a function that prints the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		_putchar(ch);
	}
	_putchar('\n');
}

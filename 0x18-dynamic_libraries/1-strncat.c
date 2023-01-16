#include "main.h"

/**
 *  _strncat - two words
 *  @dest : pointer to char param
 *  @src : pointer to char param
 *  @n : int parameter
 *  Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int size1 = 0, size2 = 0;

	while (*(dest + size1) != '\0')
	{
		size1++;
	}

	while (size2 < n)
	{
		*(dest + size1) = *(src + size2);
		if (*(src + size2) == '\0')
			break;
		size1++;
		size2++;
	}
	return (dest);
}

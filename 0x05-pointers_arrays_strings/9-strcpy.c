#include"main.h"

/**
 * _strcpy-copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcopy(char *dest, char *src)
{
	int len = 0;

	len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}

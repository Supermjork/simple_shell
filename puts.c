#include "shell.h"

/**
 * _puts - splurges whatever is in buffer
 *
 * @str: pointers to "buffer" or string head
 *
 * Return: written bytes
 */

int _puts(char *str)
{
		return (write(1, str, _strlen(str)));
}

/**
 * _strlen - length of string
 *
 * @s: string
 *
 * Return: Length
 */

int _strlen(const char *s)
{
	if (*s)
		return (1 + _strlen(++s));
	else
		return (0);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

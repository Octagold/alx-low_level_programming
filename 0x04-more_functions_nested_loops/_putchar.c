#include "main.h
#include <unistd.h>
/**
 * _putchar.c - writes the characterc to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * On error: -1 is returned and ernno is set appropriately
 */
int _putchar.c(char c)
{
	return (write(1, &c, 1));
}

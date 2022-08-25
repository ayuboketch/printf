#include"main.h"

/**
 * print_buf - prints a string specified by a buffer
 * @str: buffer input
 * @buff: buffer number
 * Return: the printed string
 */

int print_buf(char *str, int buff)
{
	return (write(1, str, buff));
}

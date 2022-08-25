#include"main.h"

/**
 * print_char - prints a char to std out
 * @arguments: the argument to be printed
 * @buf: the buffer
 * @ibuf: index of buffer pointer
 * Return: always 1 succsess
 */

int print_char(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handl_buf(buf, c, ibuf);

	return (1);
}

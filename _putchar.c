#include <unistd.h>
/**
 * _putchar - print character
 * @c: character to be printed
 *
 * Return: value indicating status of execution
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

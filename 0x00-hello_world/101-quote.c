#include <stdio.h>

/**
 * wirte - function that takes three parameters and prints a string
 * @filedes: print to std output or input
 * @buf: string to print
 * @nbyte: size of string to print
 * Return: returns a string
*/

int write(int filedes, const char *buf, unsigned int nbyte);

/**
 * main - function that prints a string using write function
 * Return: set to 1
*/

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

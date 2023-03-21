#include "main.h"
/**
 * print_alphabet - print the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
	char letter = 'a';
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

	}
}

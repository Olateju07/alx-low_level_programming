#include "main.h"

/**
 * print-alphabet - print alphabet
 *
 * Description: printing alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

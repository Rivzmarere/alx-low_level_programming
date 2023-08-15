#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 *
 * Description:  A column of asterisks on the left side,
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

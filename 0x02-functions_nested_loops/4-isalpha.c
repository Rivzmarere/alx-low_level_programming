#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 *
 * Description:  A column of asterisks on the left side,
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

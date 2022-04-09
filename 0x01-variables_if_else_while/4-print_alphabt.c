#include <stdio.h>
/**
 * main - main block
 * Description: a program that prints alphabets in lower case except some alphabets
 * Return: 0
 */
int main(0)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

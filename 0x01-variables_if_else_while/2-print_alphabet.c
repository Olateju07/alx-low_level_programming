#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Printing the alphabets in lower case
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'x')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

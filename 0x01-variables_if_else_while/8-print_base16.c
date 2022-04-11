#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for program
 * Description; print all numbers of base 16
 * starting from 0, follow by a new line
 * Return: Always 0 (Success)0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: a program that prints all possible
 * comnination of three numbers
 * Numbers are separated by ,, and a space
 * Print only the smallest combination of the three digits
 * Numbers schould be printed in ascending orders
 * You can only use the putchar function
 * (every other function (printf, puts, etc;)) is forbidden
 * You can only use putchar five times maximum in your code
 * You are not allowed any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);
					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}

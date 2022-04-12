#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: a program that prints all possible
 * comnination of three numbers
 * Numbers are separated by ,, and a space
 * Numbers schould be printed in ascending orders
 * only putchar function is used
 * no variable of type char is used
 * all code should be in the main function
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

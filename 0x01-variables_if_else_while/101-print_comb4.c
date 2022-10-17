#include <stdio.h>

/**
 * main - combination pof three numbers an a space with comma.
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <=57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (c != 55 || b != 56 || a != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}

#include <stdio.h>

/**
 * main - input the ascii value
 * output the hexadecimal of the number
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	char n;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar(10);

	return (0);
}

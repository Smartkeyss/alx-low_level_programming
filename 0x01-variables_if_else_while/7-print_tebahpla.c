#include <stdio.h>

/**
 * main - input ch
 * output reversed of alphabet
 * Return: Always 0 (success)
 */

int main(void)

{
	int ch;

	for (ch = 122; ch <= 97; ch--)
	{
		putchar(ch);
	}

	putchar(10);

	return (0);
}

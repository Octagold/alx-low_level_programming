#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int c = o;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Main function
 * Return: 0
 */
int main(void)
{
	char num;

	for (num = 'z'; num >= 'a'; num--)
		putchar(num);

	putchar('\n');

	return (0);
}

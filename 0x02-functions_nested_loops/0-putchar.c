#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('in');
	return (0);
}

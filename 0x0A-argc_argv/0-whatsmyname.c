#include "main.h"
#include <stdio.h>

/**
 *main - prints program name
 *@argc: count of arguments in command line
 *@argv: pointer to array of arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

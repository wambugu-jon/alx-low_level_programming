#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Adds positive numbers
 * @argc: Size of argv
 * @argv: Array pointer
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				return (puts("Error"), 1);
			}
		}
		sum += atoi(argv[i]);
	}
	return (printf("%d\n", sum), 0);
}

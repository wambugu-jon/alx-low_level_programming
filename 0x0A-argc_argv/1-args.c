#include <stdio.h>
#include "main.h"

/**
 *main - prints number of arguments passed in it
 *@argc: argument count
 *@argv: array pointer to arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}

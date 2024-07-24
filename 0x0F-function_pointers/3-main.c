#include "3-calc.h"

/**
*main - program that perfroms simple operations
*@argc: number of arguments
*@argv: array of arguments
*Return: Always 0 (Success)
**/
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*func)(int, int);
	char a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	a = *argv[2];

	if ((a == '/' || a == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(n1, n2));
	return (0);
}

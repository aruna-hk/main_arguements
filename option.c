#include <stdio.h>
#include <stdlib.h>

/**
* main - look fo option if
* @argc: arguement len
* @argv: argvector;
* Return: success if valid optio ///failure --invalid option
*/
const char switchoption = '-';
int main(int argc, char *argv[])
{
	int i = 0;

	while ( i < argc)
	{
		if ( **(argv + 0) == switchoption)
			printf("this is an option %s\n ", *argv);
		else
			printf("%s\n", *argv);
		argv++;
		i++;
	}
	return (EXIT_SUCCESS);
}

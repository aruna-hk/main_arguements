#include <stdlib.h>//to use exit status
#include <stdio.h>//standart io
/**
* main -- chek if passed arguements exceed specifie
* @argc: arguements count
* @argv: arguement vector contains lists of pointers to function parameters
*	characters;
* Return: EXIT_SUCCESS/EXIT_FAILURE
*/
int main(int argc, char *argv[])
{
	int i;
	char Efun_arg[3];
	if (argc > 3)
	{
		printf("error: too many arguements");
		return (EXIT_FAILURE);
	}
	for (i = 0; i < argc; i++)
	{
		printf("%s ", *argv);
			argv++;
	}
	putchar('\n');
	return (EXIT_SUCCESS);
}

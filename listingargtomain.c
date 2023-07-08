#include <stdlib.h>//to use exit status
#include <stdio.h>//standart io
/**
* main -- list the arguements passed to the function
* @argc: arguements count
* @argv: arguement vector contains lists of pointers to function parameters
*	characters;
* Return: EXIT_SUCCESS/EXIT_FAILURE
*/
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s ", *argv);
			argv++;
	}
	putchar('\n');
	return (EXIT_SUCCESS);
}

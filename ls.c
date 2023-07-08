#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - look fo option and compare with expected options
* @argc: no of arguements
* @argv: argvector list
* Return: success if valid optio ///failure --invalid option
*/
const char switchoption[] = "-l";
char validcmd[]= "ls";

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 3)
	{
		printf("Error:too many arguement\n");
		return (EXIT_FAILURE);
	}
	argv++;
	if(strcmp(validcmd, *argv) == 0)
	{
		argv++;
		if (strcmp(switchoption ,*argv) == 0)
		{
			argv--;
			while ( **argv != '\0')
			{
				printf("%s",*argv);
				argv++;
			}
		}
		else
		{
			printf("invalid option\n");
			return(EXIT_FAILURE);
		}
	}
	else
	{
		printf("invalide command\n");
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

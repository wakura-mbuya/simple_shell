#include <stdio.h>
#include <string.h>
#include "main.h"


char **get_token()
{
	char *line; 
	char *delim;
	char *token;

	delim = "\n ";
	token = strtok(line, delim);
		while (token != NULL)
		{
			printf("%s\n", token);
			token = strtok(NULL, delim);
		}
}



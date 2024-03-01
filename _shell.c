#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include "main.h"
/**
*main - program entry point
*Description: takes in functions and executes a program
*Return: 0 on success
*/
int main(void)
{
	char *line; 
	char *delim;
	char *token;

	delim = " ";
	while (1)
	{
		write(1, "$ ", 2);
		line = get_string();
		if (line == NULL)
		{
			break;
		}
		get_token();
	}
	return (0);
}

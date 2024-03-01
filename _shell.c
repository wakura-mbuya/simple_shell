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
int main(__attribute__((unused))int ac, __attribute__((unused))char **av, char **env)
{
	char *line; 
	char **array;
	while (1)
	{
		write(1, "$ ", 2);
		line = get_string();
		if (line == NULL)
		{
			break;
		}
		array = get_token(line); 
		execve(array[0], array, env);
	}
	return (0);
}

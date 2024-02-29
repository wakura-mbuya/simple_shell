#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
/**
*main - program entry point
*Description: takes in functions and executes a program
*Return: 0 on success
*/
int main(void)
{
	/* Using getline */
	FILE *stream;
	char *line;
	size_t len;
	ssize_t r;
	/* Using strtok */
	char *delim;
	char *token;

	line = NULL;
	len = 0;
	stream = stdin;
	delim = " ";
		while (1)
		{
			write(1, "$ ", 2);
			r = getline(&line, &len, stream);
			if (r == -1)
			{
				return (-1);
			}
			token = strtok(line, delim);
			while (token != NULL)
			{
				write(STDOUT_FILENO, token, strlen(token));
				token = strtok(NULL, delim);
			}
		}
	return (0);
}

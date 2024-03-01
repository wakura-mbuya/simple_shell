#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
#include "main.h"

char *get_string()
{
	FILE *stream;
	char *line;
	size_t len;
	ssize_t r;

	line = NULL;
	len = 0;
	stream = stdin;

	r = getline(&line, &len, stream);
	if (r == -1)
	{
		free(line);
		return(NULL);
	}
	return (line);
}

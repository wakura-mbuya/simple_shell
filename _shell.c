#include <stdio.h>
#include <sys/types.h>

int main(void)
{
	FILE *stream;
	char *line;
    size_t len;
	ssize_t r;

		line = NULL;
    	len = 0;
		stream = stdin;
		r = getline(&line, &len, stream);
		while (1)
		{
			printf("$ ");
			getline(&line, &len, stream);
			r = getline(&line, &len, stream);
			if (r == -1)
			{
				return (-1);
			}
		}
}
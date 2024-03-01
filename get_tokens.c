#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* $ "ls\n"  ==> ["ls" | NULL ]
* $ "ls -a\n" ==> ["ls" | "-a" | NULLL ]
* $ "ls -a -lh\n" ==> ["ls" | "-a" | "-lh" | NULLL ]
* $ "/bin/ls\n" ==> ["/bin/ls" | NULLL ]
*/

char **get_token(char *line)
{
	char *delim;
	char *token;
	char *linedup;
	char *dupline;
	int counter;
	int count;
	char **array_of_tokens;

	linedup = strdup(line); /* used for counting tokens */
	dupline = strdup(line); /* used for storing tokens into array */
	delim = "\n ";
	counter = 0;
	count = 0;

	/* pluck tokens to count them */
	token = strtok(linedup, delim);
	while (token != NULL)
	{
		counter = counter + 1;
		token = strtok(NULL, delim);
	}
	free(linedup);
	array_of_tokens = (char **)malloc(sizeof(char *) * (counter + 1));
	/* pluck tokens to store them */
	token = strtok(dupline, delim);
	while (token != NULL)
	{
		array_of_tokens[count]= strdup(token);
		count = count + 1;
		token = strtok(NULL, delim);
	}
	array_of_tokens[count] = NULL;
	free(dupline);
	return (array_of_tokens);
}

//   definitely lost: 281 bytes in 4 blocks
// ==3198==    indirectly lost: 15 bytes in 2 blocks
// ==3198==      possibly lost: 17 bytes in 1 blocks
// ==3198==    still reachable: 0 bytes in 0 blocks
// ==3198==         suppressed: 0 bytes in 0 blocks
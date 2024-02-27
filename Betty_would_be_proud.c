#include <stdio.h>
#include <stdin.h>
#include "main.h"
/**
* main - program entry point
* Description: takes in a program and gives out a result
* Return: 0 on success
*/
int main(void)
{
	char *s1, s2;
	int i, j;

	printf("Write in something:");
	s1 = scanf("%s\n");
	printf("Write in something:");
	s2 = scanf("%s\n");
	i = _strlen(s1);
	j = _strlen(s2);
	printf("The length of the first string is: %d", i);
	printf("The length of the second string is: %d", j);

	return (0);
}

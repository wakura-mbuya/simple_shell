#include <stdio.h>
int _strlen(char *str);
/**
*_strcmp - function that compares two strings.
*Description: A function that checks whether two strings are the same.
*@s1: a string variable to store the first string
*@s2: a string variable to store the second string
*Return: 0 when the strings are the same
*/
int _strcmp(char *s1, char *s2)
{
    int i, j, k;
    i = _strlen(s1);
    j = _strlen(s2);
     if (i == j)
     {
        for (k = 0; s1[k] != '\0' && s2[k] != '\0'; k++)
        {
            if (s1[k] != s2[k])
            {
                    return(1);
            }
        }
        return (0);
     }
     else 
     {
        return (1);
     }
}
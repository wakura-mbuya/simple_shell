#include <stdio.h>
/*
*_strlen - Checks the length string
*@str: a string variable that stores strings
*Return: 0 
*/
int _strlen(char *str)
{
    int i;
    int len;
    len = 0;
    for (i = 0;  str[i] != '\0'; i++)
    {
        len = len + 1;
    }
    printf("\n");
    return (len);
}
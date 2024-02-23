#include <stdio.h>
/*
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
    return (len);
}
#include <stdio.h>
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
int box;
int box1;

int main(void)
{
    char *e = "friend";
    char *s = "reindly";
    char *t = "Birthday";
    box = _strlen(t);

    box1 = _strcmp(s, e);
    printf ("%d\n", box);
    printf ("%d\n", box1);
}
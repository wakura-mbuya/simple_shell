#include <stdio.h>
int _strlen(char *str);
int box;

int main(void)
{
    char *s = "Happy";
    box = _strlen(s);
    printf ("%d", box);
}
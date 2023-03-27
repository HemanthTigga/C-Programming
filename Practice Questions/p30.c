#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[20];
    scanf("%s",str);
    char *e = strchr(str,'.');
    int index = e - str;
    char *ptr;
    ptr = strtok(str, ".");
    int t = atoi(ptr);
    if(t >= 0 && t <= 127)
        printf("Class A IP Address");
    else if(t >= 128 && t <= 191)
        printf("Class B IP Address");
    else if(t >= 192 && t <= 224)
        printf("Class C IP Address");
    else if(t >= 225 && t <= 239)
        printf("Class D IP Address");
    else
        printf("Class E IP Address");
    return 0;
}
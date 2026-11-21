#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    int icount = 0;

    while(str[icount] != '\0')
    {
        icount++;
    }
    icount--;
    while(icount >= 0)
    {
        printf("%c",str[icount]);
        icount--;
    }
    return 0;
}

int main()
{
    char arr[20];
    int iret = 0;
    printf("enter the string\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);
    return EXIT_SUCCESS;
}
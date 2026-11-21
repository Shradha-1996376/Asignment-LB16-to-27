#include<stdio.h>
#include<stdlib.h>

int charactercount(char *str, char ch)
{
    int icount = 0;

    while(*str != '\0')
    {
        if(*str == 'M')
        {
            icount++;
        }
        str++;
    }
    return icount;
}

int main()
{
    char arr[20];
    char cvalue;
    int bret = 0;

    printf("enter string\n");
    scanf("%[^'\n']s",arr);

     printf("enter character\n");
    scanf(" %c",&cvalue);

    bret = charactercount(arr, cvalue);

        printf("character frequency is %d\n",bret);
    

    return EXIT_SUCCESS;
}
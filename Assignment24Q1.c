#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkchar(char *str, char ch)
{
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
        return TRUE;
    
    }
    str++;
    }
    
        return FALSE;
    
    
    
}

int main()
{
    char arr[20];
    char cvalue;
    BOOL bret = FALSE;

    printf("enter string\n");
    scanf("%[^'\n']s",arr);

     printf("enter character\n");
    scanf(" %c",&cvalue);

    bret = checkchar(arr, cvalue);


    if(bret == TRUE)
    {
        printf("character found\n");
    }
    else
    {
        printf("character is not fount\n");
    }

    return EXIT_SUCCESS;
}
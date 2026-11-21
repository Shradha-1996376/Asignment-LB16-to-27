#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkAlpha( char ch)
{
    
    while(ch != '\0')
    {
        if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
        {
        return TRUE;
        }
        else
        {
            return FALSE;    
        }
    ch++;
    }
    
}

int main()
{
    
    char cvalue = '\0';
    BOOL bret = FALSE;


     printf("enter character\n");
    scanf(" %c",&cvalue);

    bret = checkAlpha(cvalue);


    if(bret == TRUE)
    {
        printf("it is characther\n");
    }
    else
    {
        printf("it is not character\n");
    }

    return EXIT_SUCCESS;
}
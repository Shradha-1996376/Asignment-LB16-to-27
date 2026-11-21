#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkCapital( char ch)
{
    
    while(ch != '\0')
    {
        if((ch >= 'A' && ch <= 'Z'))
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

    bret = checkCapital(cvalue);


    if(bret == TRUE)
    {
        printf("it is capital\n");
    }
    else
    {
        printf("it is not capital\n");
    }

    return EXIT_SUCCESS;
}
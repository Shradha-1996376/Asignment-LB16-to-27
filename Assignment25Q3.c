#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkDigit( char ch)
{
    
    while(ch != '\0')
    {
        if((ch >= '0' && ch <= '9'))
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

    bret = checkDigit(cvalue);


    if(bret == TRUE)
    {
        printf("it is digit\n");
    }
    else
    {
        printf("it is not digit\n");
    }

    return EXIT_SUCCESS;
}
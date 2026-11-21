#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkSpecial( char ch)
{
    
    while(ch != '\0')
    {
        if((ch == '!')||(ch == '@')||(ch == '#')||(ch == '$')||(ch == '%')||(ch == '^')||
            (ch == '&')||(ch == '*'))
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

    bret = checkSpecial(cvalue);


    if(bret == TRUE)
    {
        printf("it is special character\n");
    }
    else
    {
        printf("it is not special character\n");
    }

    return EXIT_SUCCESS;
}
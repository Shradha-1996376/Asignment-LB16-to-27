#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkVowel( char *str)
{
    if(str == NULL)
    {
        return FALSE;
    }
    
    while(*str != '\0')
    {
        if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u')||
            (*str == 'A')||(*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U'))
        {
        return TRUE;
        }
        else
        {
            return FALSE;    
        }
    str++;
    }
    
}

int main()
{
    
    char arr[20];
    BOOL bret = FALSE;


     printf("enter string\n");
    scanf("%[^'\n']s",arr);

    bret = checkVowel(arr);


    if(bret == TRUE)
    {
        printf("it is contain vowel\n");
    }
    else
    {
        printf("it is not contain vowel\n");
    }

    return EXIT_SUCCESS;
}
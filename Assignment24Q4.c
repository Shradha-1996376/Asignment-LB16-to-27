#include<stdio.h>
#include<stdlib.h>

int characterlocation(char *str, char ch)
{
    int icount = 0;
    int inext = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            inext = icount;
        }
        icount++;
        str++;
    }
    return inext;
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

    bret = characterlocation(arr, cvalue);

        printf("character Location  is %d\n",bret);
    

    return EXIT_SUCCESS;
}
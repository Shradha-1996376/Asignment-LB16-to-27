#include<stdio.h>
#include<stdlib.h>

void strRev(char *str)
{
    int icount = 0;
    

    while(str[icount] != '\0')
    {
        icount++;
    }
        icount--;
        while( icount >= 0)
        {
            
            printf("%c\t",str[icount]);
            icount--;
        }
       return 0; 
}
    


int main()
{
    char arr[20];

    printf("enter string\n");
    scanf("%[^'\n']s",arr);
    strRev(arr);

    printf("Modifing string is %s",arr);

    return EXIT_SUCCESS;
}
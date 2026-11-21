#include<stdio.h>
#include<stdlib.h>

void pattern(int ino)
{
    int i = 0;
    char ch ='\0';
    for(i = 1 ,ch = 'A'; i <= ino; i++,ch++)
    {
            printf("%c\t",ch);
            
    }
    printf("\n\n");
}
int main()
{
    int ivalue = 0 ;
    printf("enter the element\n");
    scanf("%d ",&ivalue);

    pattern(ivalue);
    return EXIT_SUCCESS;
}
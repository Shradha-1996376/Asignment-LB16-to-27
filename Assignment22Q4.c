#include<stdio.h>
#include<stdlib.h>

void pattern(int ino)
{
    int i = 0;
    for(i = 1 ; i <= ino; i++)
    {
         printf("#\t %d\t *\t",i);
        
        
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
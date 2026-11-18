#include<stdio.h>
#include<stdlib.h>

void pattern(int irow, int icol)
{
    int i = 0, j = 0;
    

    for(i = irow ; i > 0; i--)
    {
        for(j = 1; j <= icol; j++)
        {
            printf("%d\t",i);
        }
        printf("\n\n\n");
    }
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;
    printf("Enter number of row and columns\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    pattern(ivalue1,ivalue2);
    return EXIT_SUCCESS;
}
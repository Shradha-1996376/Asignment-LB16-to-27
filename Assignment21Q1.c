#include<stdio.h>
#include<stdlib.h>

void pattern(int irow, int icol)
{
    int i = 0, j = 0;
    for(i = 1; i <= irow; i++)
    {
        for(j = 1; j <= icol; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;
    printf("enter the number of row and columns\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    pattern(ivalue1,ivalue2);
    return EXIT_SUCCESS;
}
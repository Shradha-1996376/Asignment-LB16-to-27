#include<stdio.h>
#include<stdlib.h>

void pattern(int irow, int icol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1 ,ch = 'A'; i <= irow; i++,ch++)
    {
        for(j = 1; j <= icol; j++)
        {
            printf("%c\t",ch,j);
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
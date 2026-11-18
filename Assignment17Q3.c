#include<stdio.h>
#include<stdlib.h>

void pattern(int irow, int icol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= irow; i++)
    {
        ch = 'a';
        
        for(j = 1; j <= icol; j++)
        {
            if(i % 2 != 0)
            {
            printf("%c\t",ch);
            ch++;
            }
            else
            {            
               printf("%d\t",j);
            }
            

        }
        printf("\n\n");
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;
    printf("enter number of rows and columns: \n");
    scanf("%d %d",&ivalue1,&ivalue2);

    pattern(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

void pattern(int irow , int icol)
{
    int i = 0, j = 0;
    for(i = 1; i <= irow+1; i++)
    {
        for(j = 1; j <= icol+1; j++)
        {
           
             if(i == j)
            {
                printf("%d\t",j);
            }
            else if(i == 1 || i == irow +1 || j == 1 || j == icol + 1)
            
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
            }
        }   
            printf("\n\n");
        }
    }

        
    


int main()
{
    int ivalue1 = 0, ivalue2 = 0;
    printf("enter the number of rows and columns\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    pattern(ivalue1,ivalue2);
    return EXIT_SUCCESS;
}
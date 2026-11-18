#include<stdio.h>
#include<stdlib.h>

void pattern(int irow, int icol)
{
    int i = 0, j = 0;
    int icnt =1;
    

    for(i = 1 ; i <= irow ; i++)
    {
        for(j = 1 ; j <= icol; j++)
        {

            for(j = 1 ; j <= icol; j++)
            {
            if((i % 2) != 0)
            {
                printf("%d\t",j * 2);
            
            }
            else
            {
                printf("%d\t",(j * 2)-1);
            }    
            
            if(icnt > 10)
            {
                icnt = 1;
            }
            
            }
            printf("\n\n\n");
        }
        
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
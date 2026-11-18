#include<stdio.h>
#include<stdlib.h>

void pattern(int irow ,int icol)
{
    int i = 0, j = 0;
    char ch1 = '\0', ch2 ='\0';

    for(i = 1; i <= irow; i++)
    {
        ch1 = 'A';
        ch2 = 'a';

        for(j = 1; j <= icol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch1);
                ch1++;
            }
            else
            {
                printf("%c\t",ch2);
                ch2++;
            }
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
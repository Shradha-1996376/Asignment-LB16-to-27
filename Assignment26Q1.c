#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int icnt = 0;

    printf("------------------------------------------\n");
    printf("Char\t Decimal\t\t Hex\t\tOctal\n");
    printf("------------------------------------------\n");

    for( icnt = 0; icnt<= 255; icnt++)
    {
        if(icnt < 32 || icnt == 127)
        {
            printf("N/A\t%d\t\t%X\t\t%o\n",icnt, icnt,icnt);
        }
        else
        {
            printf("%c\t%d\t\t%X\t\t%o\n",icnt,icnt,icnt,icnt);
        }
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
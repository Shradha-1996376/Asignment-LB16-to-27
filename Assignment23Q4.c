#include<stdio.h>
#include<stdlib.h>

void displaydigit(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c",str[i]);
        }
        i++;
    }

}

int main()
{
    char arr[20];

    printf("enter string\n");
    scanf("%[^'\n']s",arr);

    displaydigit(arr);
    
    return EXIT_SUCCESS;

}
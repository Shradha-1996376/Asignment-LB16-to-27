#include<stdio.h>
#include<stdlib.h>

int countspace(char *str)
{
    int i = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            i++;
        }
        str++;
    }
    return i;

}

int main()
{
    char arr[20];
    int irt = 0;

    printf("enter string\n");
    scanf("%[^'\n']s",arr);

    irt = countspace(arr);
    printf("%d\n",irt);
    return EXIT_SUCCESS;

}
#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        printf("%c\n",ch + 32);
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        printf("%c\n",ch -32);
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cvalue ='\0';

    printf("Enter the character\n");
    scanf("%c",&cvalue);

    Display(cvalue);
    return EXIT_SUCCESS;
}
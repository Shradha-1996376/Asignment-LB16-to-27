#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal %d\n",ch);
    printf("Octal %o\n",ch);
    printf("Hexadecimal %X\n",ch);
}

int main()
{
    char cvalue ='\0';

    printf("Enter the character\n");
    scanf(" %c",&cvalue);

    Display(cvalue);
    return EXIT_SUCCESS;
}
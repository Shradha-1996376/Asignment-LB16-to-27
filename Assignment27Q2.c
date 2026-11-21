#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int icnt = 0;

    if(str == NULL)
    {
        return -1;
    }
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
           icnt++;
        }
        str++;
    }
    return icnt;

}

int main()
{
    char arr[50];
    int iret = 0;

    printf("enter string\n");
    scanf("%[^'\n']s",arr);

    iret = CountCapital(arr);
    printf("%d\n", iret);

    return EXIT_SUCCESS;


}
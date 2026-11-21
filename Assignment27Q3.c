#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int icnt1 = 0;
    int icnt2 = 0;

    if(str == NULL)
    {
        return -1;
    }
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
           icnt1++;
        }
        else  if((*str >= 'a') && (*str <= 'z'))
        {
           icnt2++;
        }
        str++;
    }
    
    return (icnt1 - icnt2);

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
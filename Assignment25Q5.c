#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

 void Displayschedule( char chDiv)
{
        if((chDiv == 'A')||(chDiv == 'a'))
        {
            printf("Your exam time at 7 AM \n");
        }
        else if((chDiv == 'B')||(chDiv == 'b'))
        {
            printf("Your exam time at 8:30 AM\n");
        }
        else if((chDiv == 'C')||(chDiv == 'c'))
        {
            printf("Your exam time at 9:30 AM\n");
        }
        else if((chDiv == 'D')||(chDiv == 'd'))
        {
            printf("Your exam time at 10:30 AM\n");
        }
        else
        {
            printf("Invalid division\n");
        }
   
    
}

int main()
{
    
    char cvalue = '\0';
    printf("enter your division:\n");
    scanf(" %c",&cvalue);

    Displayschedule(cvalue);
    

    return EXIT_SUCCESS;
}
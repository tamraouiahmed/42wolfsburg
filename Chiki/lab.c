#include <stdio.h>

int lab (int a)
{
    if (a==1)
     {
        printf("take the stairs");
     }
        else if (a<0)
        {
            printf("negative number fuck off\n");
        }
        else
        {
            printf("take the elevator");
        }

    
}

int main()
{
    int a;
    printf("please enter your ticket number:\n");
    scanf(" %d", &a);
    lab(a);

}
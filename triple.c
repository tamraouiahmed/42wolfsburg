#include<stdio.h>
int comparing (int a,int b,int c)
{
if (c>a+b)
{
    printf("c superieur a b et a");
} 
else if (a+b==c)
{
    printf("c equal a+b");
} 
else
{
    printf("c moins que a et b");

}
}
int main()
{
    int a,b,c;

    printf("a =  ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf ("c = ");
    scanf("%d", &c);

    comparing(a,b,c);
}

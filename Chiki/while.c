#include<stdio.h>
int main ()
{
    int s,i;
    s=0;
    i=1;
    while (i<=20)
    {
      s=s+i;
       i++;
    }
     printf ("la somme des premiers posi nums = %d",s);
}

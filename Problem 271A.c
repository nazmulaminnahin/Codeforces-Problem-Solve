#include<stdio.h>
int main()
{
    int year,a,b,c,d;
    scanf("%d",&year);
    while(1)
    {
        year++;
        a=year/1000;
        b=year/100%10;
        c=year/10%10;
        d=year%10;
         if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
         {
             break;
         }
    }
    printf("%d",year);
}

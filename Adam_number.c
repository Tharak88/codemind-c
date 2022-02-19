#include<stdio.h>
int main()
{
    int sqr,n,r,rev=0,rev2=0,s,m;
    scanf("%d",&n);
    sqr=n*n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    m=rev*rev;
    while(m>0)
    {
        s=m%10;
        rev2=rev2*10+s;
        m=m/10;
    }
    if(sqr==rev2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
#include<stdio.h>
int main()
{
    int l,b,w,a1,a2,s,c,f;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a1=(l+2*w)*(b+2*w);
    a2=l*b;
    s=a1-a2;
    f=s*c;
    printf("%d",f);
    
}

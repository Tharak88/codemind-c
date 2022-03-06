#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char a[100],rev[100];
    scanf("%[^
]s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        rev[i]=a[len-i-1];
    }
    printf("%s
",rev);
}
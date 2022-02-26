#include<stdio.h>
int main()
{
    int i,n;
	scanf("%d",&n);
	int num[n];
    for(i=0;i<n;i++)
    {
     	scanf("%d",&num[i]);
	}   
	for(i=0;i<n;i++)
	{
	
   if(num[i]%2==1)
   {
   	if(i%2==0)
   	{
	   
   	printf("False");
   	return 0;
   }
   }
}
   
   	printf("True");
   

}
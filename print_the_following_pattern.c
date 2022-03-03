#include<stdio.h>
#include<math.h>
int main()
{
	/*float c,f;
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("%.2f
",c);*/
	/*int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>>c)
	{
		printf("%d
",a);
		
	}
	else if(b>a&&b>c)
	{
		printf("%d
",b);
		
	}
	else if(c>a&&c>b)
	{
		printf("%d
",c);
	}*/
	/*float a,b,c,s,area;
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area---->%f
",area);*/
	
	/*int y;
	scanf("%d",&y);
	if(y%4==0&&(y%100!=0&&y%400==0))
	{
		printf("%d is leap year",y);
	}
	else{
		printf("%d is not a leap year",y);
	}
	*/
	
/*	float a,b,c,i,j,r1,r2;
	scanf("%f%f%f",&a,&b,&c);
	i=(b*b)-(4*a*c);
	j=2*a;
	if(i>0)
	{
		printf("REAL ROOTS
");
		r1=(-b+sqrt(i))/j;
		r2=(-b-sqrt(i))/j;
		printf("r1=%f  r2=%f
",r1,r2);
	}
	else if(i==0)
	{
		printf("EQUAL ROOTS
");
		r1=(-b+sqrt(i))/j;
		r2=(-b-sqrt(i))/j;
				printf("r1=%f  r2=%f
",r1,r2);

	}
	else 
	{
		printf("IMAGINARY ROOTS
");
	}*/
	
/*
	int a,b,c;
	char op;
	printf("enter the operator");
	scanf("%c",&op);
	printf("enter values");
		scanf("%d%d",&a,&b);

	switch(op)
	{
		case'+':c=a+b;
			printf("%d + %d=%d
",a,b,c);
			break;
		case'-':c=a-b;
		printf("%d-%d=%d
",a,b,c);
		break;
		case'*':c=a*b;
		printf("%d*%d=%d
",a,b,c);
		break;
        case'%':c=a%b;
     	printf("%d MOD %d=%d
",a,b,c);
     	break;
     	case'/':c=a/b;
     	printf("%d/%d=%d
",a,b,c);
     	break;
        default:
        	printf("INVALID
");
		
}
*/
   /*    int n,i,r,count=0;
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
       	if(n%i==0)
       	{
       		count++;
		   }
	   }
	   if(count==2)
	   {
	   	printf("prime");
	   	
	   }
        else
        {
        	printf("not a prime");
		}
*/

/*int n,r,temp,sum=0;
scanf("%d",&n);
temp=n;
     while(n>0)
     {
     	r=n%10;
     	sum=sum+(r*r*r);
     	n=n/10;
	 }
	 if(temp==sum)
	 {
	 	printf("%d is armstrong number
",temp);
	 }
	 else
	 {
	 	printf("%d is not a armstrong number
",temp);
	 }*/
	 
	 int i,j,n,s=1;
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	 	for(j=1;j<=i;j++)
	 	{
	 		printf("%d",j);
	 		s++;
		 }
		 printf("
");
	 }
	 
	 
}
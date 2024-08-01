#include<stdio.h>
int main()
{
	int a=10,b=20,c=30,x,y,z;
	
	x=a>b;
	printf("%d",x);
	
	y=a<b;
	printf("\n%d",y);
	
	z=x&&y;
	printf("\n%d",z);
	
	z=x||y;
	printf("\n%d",z);	
	
	z=!z;
	printf("\n%d",z);
	
	
	return 0;
}


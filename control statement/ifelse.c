#include<stdio.h>
int main()
{
	int pass;
	printf("please enter your password");
	scanf("%d",&pass);
	if(pass==123)
	{
	printf("processing please wait");
	}
	else{
	printf("incorrect password");
	}
	return 0;
}

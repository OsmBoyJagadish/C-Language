#include<stdio.h>
int main()
{
	int user,row,space,star;
	printf("enter the no. of rows ");
	scanf("%d",&user);
	
	for(row=1;row<=user;row++){
		for(space=1;space<=user-row;space++){
			printf(" ");
		}
		for(star=1;star<=((2*row)-1);star++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

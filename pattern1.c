#include<stdio.h>
int main()
{
	int row=1,column=1;
	while(row<=4){
		column=1;
		while(column<=row){
			printf("*");
			column++;
		}
		printf("\n");
		row++;
	}
	
	
	return 0;
}

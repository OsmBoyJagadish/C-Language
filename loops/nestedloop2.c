#include<stdio.h>
int main()
{
	int row,column;
	for(row=1;row<=4;row++){
		for(column=1;column<=3;column++){
			if(row%2==0){
			printf("#");
			
			}else{
				printf("*");
			}
			
		}
		printf("\n");
	}
	
	
	return 0;
}

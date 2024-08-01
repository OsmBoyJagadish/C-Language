#include<stdio.h>
int main()
{
	int row,column;
	for(row=1;row<=2;row++)
	{ 
		for(column=1;column<=3;column++){
			if(row==1){
				printf("%d",column);
			}else{
				printf("%d",column+3);
			}
		
		}
		
	printf("\n");

	}
	return 0;
}

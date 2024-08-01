#include<stdio.h>
int main(){
	
	int rows,i,j;
	printf("Enter the length : ");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++){
		for(j=1;j<=((3*rows));j++){
			if(j==(rows+(i-1))){
				printf("*");
			}else if(i==rows){
				printf("*");
			}else{
				printf(" ");
			}
				
		}
			printf("\n");
		}
		for(i=rows-1;i>=1;i--){
			for(j=1;j<=((3*rows));j++){
				if(j==(rows+(i-1))){
					printf("*");
				}else{
					printf(" ");
				}
			}
	    printf("\n");
			
	}
	
	return 0;
}

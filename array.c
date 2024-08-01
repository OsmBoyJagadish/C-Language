#include<stdio.h>
int main()
{
	// this is 1-d array
	
	int a[5]={10,20,30,20,50};
	int index;
	for(index=0;index<=4;index++){
		printf("%d\n",a[index]);
	}
	
	//printf("%d",a[3]);
	
	// this is 2-d array
	
	int d[2][2]={{1,2},{2,1}};
	int i,j;
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("\nd[%d][%d]=%d",i,j,d[i][j]);
		}
	}
	
	//printf("%d",b[0][1]);
		
	return 0;
}

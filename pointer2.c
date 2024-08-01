#include<stdio.h>
int main(){
	int a[5]={10,20,30,40,50};
	int index;
	int *p=a;
	for(index=0;index<=4;index++){
		printf("array = %d\n",a[index]);
		printf("pointer = %d\n",*(p+index));
		
	}
	
	return 0;
}

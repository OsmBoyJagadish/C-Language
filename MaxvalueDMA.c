#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int *ptr,i,size,max;
	printf("enter size ");
	scanf("%d",&size);
	
	ptr=(int*)malloc(size*sizeof(int));
	
		for(i=0;i<size;i++){
	      	printf("\nenter elements ");
		    scanf("%d",ptr+i);
		    if(*(ptr+i)>max)
		    max=*(ptr+i);
		}
	printf("\nmax value = %d",max);
	
	return 0;
}

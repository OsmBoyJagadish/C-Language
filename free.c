#include<stdio.h>
#include<stdlib.h>
int main(){
	
	 int *ptr,i,size;
	 
	 printf("enter the size of array ");
	 scanf("%d",&size);
	 printf("size of array is %d",size);
	 
	 ptr=(int*)calloc(size,sizeof(int));
	 
	 for(i=0;i<=size-1;i++){
	 	printf("\n enter the element ");
	 	scanf("%d",&ptr[i]);
	 }
	 
	 free(ptr);
	 
	 for(i=0;i<=size-1;i++){
	 	printf("\n element is %d",*(ptr+i));
	 }
	
	return 0;
}

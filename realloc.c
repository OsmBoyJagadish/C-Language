#include<stdio.h>
#include<stdlib.h>
int main(){
	
	 int *ptr,i,size,newsize=0;
	 
	 printf("enter the size of array ");
	 scanf("%d",&size);
	 printf("size of array is %d",size);
	 
	 ptr=(int*)malloc(size*sizeof(int));
	 newsize=size+2;
	 ptr=(int*)realloc(ptr,newsize);
	 
	 for(i=0;i<=newsize-1;i++){
	 	printf("\n enter the element ");
	 	scanf("%d",&ptr[i]);
	 }
	 
	 for(i=0;i<=newsize-1;i++){
	 	printf("\n element is %d",*(ptr+i));
	 }
	
	return 0;
}

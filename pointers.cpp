/*
#include<stdio.h>
int main(){
	int i=10;
    int *j=&i;  //int *j;  j=&i;
	
	*j=30;
	
	printf("%d",i);
	printf("\n%d",*j);
	
	return 0;
}
*/

#include<stdio.h>
int main(){
	int i=50;
	int *j;
	j=&i;
	printf("%d",i);
	printf("\n%d",j);
	printf("\n%d",&i);
	printf("\n%d",&j);
	printf("\n%d",*j);
	printf("\n%d",*(&i));	
	
	return 0;
}

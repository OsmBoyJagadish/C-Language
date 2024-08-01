#include<stdio.h>
int add(){
	int a,b,c;
    printf("first no");
	scanf("%d",&a);
	printf("second no");
	scanf("%d",&b);
	c=a+b;
	printf("%d",c);
}
int main(){
	int add();
	add();
	
	return 0;
}



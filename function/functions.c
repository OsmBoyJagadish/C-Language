#include<stdio.h>
void addTwoNos(); //declaration or prototype
int main(){
	addTwoNos();
	addTwoNos(); //calling
	return 0;
}
void addTwoNos(){   //defination
	int no1=10,no2=20;
	printf("sum is %d\n",no1+no2);
}

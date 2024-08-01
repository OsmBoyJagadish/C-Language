#include<stdio.h>
void print1to10();
count=0;
int main(){
	print1to10();
//	printf("hello main");
}

void print1to10(){
	if(count<10){
		count++;
		printf("%d\n",count);
		print1to10();
	}
}


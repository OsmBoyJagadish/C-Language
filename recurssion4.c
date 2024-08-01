#include<stdio.h>
int main(){
	
	int g;
	printf("calculated fibonacci : ");
	for(g=0;g<10;g++){
		printf("\n %d",fibo(g));
	}
	return 0;
}

int fibo(int g){
	if(g==0){
		return 0;
	}
	if(g==1){
		return 1;
	}
	return fibo(g-1)+fibo(g-2);
}

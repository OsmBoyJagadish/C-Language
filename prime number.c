#include<stdio.h>
int main(){
	
	int n,i,j=0;
	printf("enter any number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			j++;
		}
	}
	if(j==2){
		printf("it is a prime number");
	}else{
		printf("it is not a prime number");
	}
	
	return 0;
}

//with argument and with return value
#include<stdio.h>
int checkPrimeNo(int n);
int main(){
	int n,flag;  
	printf("enter any number ");
	scanf("%d",&n);
	flag=checkPrimeNo(n);
	
	if(flag==1){
		printf("%d is not a prime number.");
	}else{
		printf("%d is a prime number.");
	}
		
	return 0;
}

int checkPrimeNo(int n){
	if(n==0��n==1) //0 and 1 are not prime numbers
	return 1;      
	
	int i;
	
	for(i=2;i<n/2;i++){
		if(n%i==0)
		return 1;
		}
		
	return 0;
}


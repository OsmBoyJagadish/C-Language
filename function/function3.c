//with arguement no return value
#include<stdio.h>
void checkPrimeNo(int n);
int main(){
	int n;
	printf("enter any number ");
	scanf("%d",&n);
	checkPrimeNo(n);
	
	return 0;
}

void checkPrimeNo(int n){
	int i,flag=0;
//	if(n==0¦¦n==1)    //0 and 1 are not prime numbers
//	flag=1;           //flag=1 is not a prime number
	
	for(i=2;i<n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("%d is not a prime number.",n);
	}else{
		printf("%d is a prime numeber.",n);
	}
}



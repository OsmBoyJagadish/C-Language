// no argument with return value
#include<stdio.h>
int checkPrimeNo();
int main(){
	int jagadish;
	jagadish=checkPrimeNo();  //calling
	if(jagadish==1){
		printf("it is not a prime number");
	}else if(jagadish==0){
		printf("it is a prime number");
	}
	
	return 0;
}

int checkPrimeNo(){
	int no,i,flag;
	printf("enter any number ");
	scanf("%d",&no);
	
	for(i=2;i<no;i++){
		if(no%i==0){
			flag=1;
			break;
		}else{
			flag=0;
		}
	}
	return flag;
}

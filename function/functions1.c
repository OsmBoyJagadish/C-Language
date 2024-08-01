//no arguements and no return value
#include<stdio.h>
void checkPrimeNo(); //declaration or prototype
int main(){
	checkPrimeNo();  //calling
	return 0;
}
void checkPrimeNo(){   //defination
	int no,i,flag;    //flag=0 prime  flag=1 not a prime
	printf("enter your number ");
	scanf("%d",&no);
	
	for(i=2;i<no;i++){
		if(no%i==0){
			flag=1;
			break;
		}else{
		flag=0;
		}
	}
	if(flag==1){
		printf("not a prime number");
	}else if(flag==0){
		printf("it is a prime number");
	}
}



#include<stdio.h>
int main(){
	
	int n,i,r,fact,temp,sum=0;
	printf("enter any number : ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0){
		r=n%10;
		fact=1;
		for(i=r;i>=1;i--){
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	n=temp;
	
	if(n==sum){
		printf("it is strong number");
	}else{
		printf("it is not a strong number");
	}
	
	return 0;
}

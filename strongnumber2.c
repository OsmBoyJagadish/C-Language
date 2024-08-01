#include<stdio.h>
int main(){
	
	int limit,n,i,r,fact,temp,sum=0;
	
	printf("enter limit : ");
	scanf("%d",&limit);
//	temp=n;
	
	for(n=1;i<=limit;n++){
	
	while(n>0){
		r=n%10;
		fact=1;
		for(i=r;i>=1;i--){
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
}
//	n=temp;
	
	if(n==sum){
		printf("\n %d strong number",n);
	}else{
		printf("no strong numbers are there");
	}
	
	return 0;
}

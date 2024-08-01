//#include<stdio.h>
//int main(){
//	
//	int n,r,c,sum=0,temp;
//	printf("enter any numbers : ");
//	scanf("%d",&n);
//	temp=n;
//	
//	while(n>0){
//		r=n%10;
//		c=r*r*r;
//		sum=sum+c;
//		n=n/10;
//		
//		}
//	n=temp;
//	
//	if(n==sum){
//		printf("it is armstrong number");
//	}else{
//		printf("it is not an armstrong number");
//	}
//	
//	return 0;
//}


//#include<stdio.h>
//int main(){
//	
//	int n,i,fact=1;
//	printf("enter n for factorial : ");
//	scanf("%d",&n);
//	
//	for(i=n;i>=1;i--){
//		fact=fact*i;
//	}
//	
//	printf("%d",fact);
//	
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	
//	int n,i,a=0,b=1,c;
//	printf("enter n value : ");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		printf(" \n %d",a);
//		c=a+b;
//		a=b;
//		b=c;
//	}
//	
//	
//	return 0;
//}


//#include<stdio.h>
//int main(){
//	
//	int n,i,j=0;
//	printf("enter the number : ");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		if(n%i==0){
//			j++;;			
//		}
//	}
//	
//	if(j==2){
//		printf("it is prime number");
//	}else{
//		printf("it is not a prime number");
//	}
//	
//	return 0;
//}

#include<stdio.h>
int main(){
	
	int n,r,c,sum=0,temp;
	printf("enter any numbers : ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
		
		}
	n=temp;
	
	if(n==sum){
		printf("it is palindrome number");
	}else{
		printf("it is not an palindrome number");
	}
    
    return 0;
}




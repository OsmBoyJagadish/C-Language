 #include<stdio.h>
int main(){
	
	int n,r,sum=0,temp;
	printf("enter your numbers : ");
	scanf("%d",&n);
	
	temp=n;
	
	while(n>0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=temp;
	
	if(n==sum){
		printf("it is a palindrome number");
	}else{
		printf("it is not a palindrome number");
	}
	
	return 0;
}

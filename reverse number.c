#include<stdio.h>
int main(){
	
	int user,rev=0,r;
	printf("enter your numbers ");
	scanf("%d",&user);
		
	   	while(user>0){
			r=user%10;
			rev=r+(rev*10);
			user=user/10;
		}
	    printf("%d",rev);	

	return 0;
}

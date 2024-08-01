#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("factorial of ");
    scanf("%d",&n);
    
	//for(i=n;i>=1;i--){
    //	fact=fact*i;
    //}
    for(i=1;i<=n;i++){
      	fact=fact*i;
	  }
        printf("factorial is %d",fact);
        
	return 0;
}



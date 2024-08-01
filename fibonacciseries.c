#include<stdio.h>
int main(){
	
	int n,a=0,b=1,i,c;
	printf("enter n value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("\n %d  ",a);
		c=a+b;
		a=b;
		b=c;
	}
		
	return 0;
}



//#include<stdio.h>
//int main(){
//	
//	int n1=0,n2=1,n3,i,number;
//	printf("enter the number of elements : ");
//	scanf("%d",&number);
//	printf("%d %d",n1,n2);
//	for(i=2;i<number;i++){
//		n3=n1+n2;
//		printf("%d",n3);
//		n1=n2;
//		n2=n3;
//	}
//	
//	return 0;
//}

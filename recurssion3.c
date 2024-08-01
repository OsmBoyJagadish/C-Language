#include<stdio.h>
int main(){
	
	int f=12;
	printf("\n The factorial of %d is %d ",f,fact(f));
    return 0;
}

int fact(int f){
	
	if(f==0 || f==1){
		printf("Calculated factorial : ");
		return 1;
	}
	return f*fact(f-1);
}

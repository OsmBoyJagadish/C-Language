#include<stdio.h>
int arfun();
int main(){
	arfun();
	return 0;
}

int arfun(){
	int a[5]={10,20,30,40,50};
	int index;
	for(index=0;index<=4;index++){
		printf("%d\n",a[index]);
	}
}

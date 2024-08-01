#include<stdio.h>
void NameByReference(int *v);
int main(){
	int j=20,*p;
	p=&j;
    NameByReference(p);
		
	return 0;
}

void NameByReference(int *v){

	printf("\nold value of p is %d", *v);
	(*v)++;
	printf("\nnew value of p is %d",*v);
		
}

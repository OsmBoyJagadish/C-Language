#include<stdio.h>
struct emp{
	int eno;
	char ename[20];
	float esal;
	
};
int main(){
	struct emp e;
	printf("size of emp is : %d",sizeof(e));
		
	return 0;
}

#include<stdio.h>
struct student{
	char name;
	int fee;
	int rollno;
	
};
int main(){
	struct student s[2],sTemp;
	int i;
	sTemp.name='j';
	sTemp.fee=4000;
	sTemp.rollno=1;
	s[0]=sTemp;
	
	sTemp.name='s';
	sTemp.fee=5000;
	sTemp.rollno=2;
	s[1]=sTemp;
	
	for(i=0;i<2;i++){
		printf("name=%c fee=%d rollno=%d \n",s[i].name,s[i].fee,s[i].rollno);
	}
	
	return 0;
}

//galat hai


#include<stdio.h>
union student{
	char name;
	int fee;
	int rollno;
	
};
int main(){
	union student s;
	int i;
	s.name='j';
	s.fee=4000;
	s.rollno=1;
	
	printf("name=%c fee=%d rollno=%d \n",s.name,s.fee,s.rollno);
	
	return 0;
}

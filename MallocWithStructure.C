#include<stdio.h>
#include<stdlib.h>
struct teacher{
	int id;
	int sal;
	char sub;
	
};
int main(){
	int noOfTeachers,i;
	struct teacher t,*TeacherPointer;
	printf("please enter no. of teachers : ");
	scanf("%d",&noOfTeachers);
	
	TeacherPointer=(struct teacher*)malloc(noOfTeachers*sizeof(struct teacher));
	
	for(i=0;i<noOfTeachers;i++){
		printf("please enter teachers id sal and subject respectively ");
		scanf("%d %d %c",&(TeacherPointer+i)->id,&(TeacherPointer+i)->sal,&(TeacherPointer+i)->sub);
	}
	
	for(i=0;i<noOfTeachers;i++){
		printf("\n id=%d sal=%d sub=%c",(TeacherPointer+i)->id,(TeacherPointer+i)->sal,(TeacherPointer+i)->sub);
	}
	
	return 0;
} 

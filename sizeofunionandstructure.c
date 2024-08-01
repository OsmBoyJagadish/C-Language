//galat hai pura

#include<stdio.h>
union unionjob
{
	int i;
	char name;
	float f;
}ujob;

struct structjob
{
	int i;
	char name;
	float f;
}sjob;

int main(){
	
	printf("size of ujob is %d",sizeof(ujob));
	printf("\nsize of sjob is %d",sizeof(sjob));
    
    return 0;
}

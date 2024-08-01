//galat hai
#include<stdio.h>
int main(){
	
	char firstname[20],lastname[20],newname[20];
	
	printf("enter your first name : ");
	scanf("%s",&firstname);
	
	printf("enter your last name : ");
	scanf("%s",&lastname);
	
	int i;
	for(i=0;i<=1;i++){
		printf("newname= %c %c",firstname[i],lastname[i]);
	}
	
//	printf("%s %s",firstname,lastname);
	
		
	return 0;
}

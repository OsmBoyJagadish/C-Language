#include<stdio.h>
int main(){
	
	char firstname[20],lastname[30],fullname[50];
	printf("please enter your firstname : ");
//	fgets(firstname,sizeof(firstname),stdin);
	scanf("%s",firstname);
	
	printf("please enter your lastname : ");
//	fgets(lastname,sizeof(lastname),stdin);
	scanf("%s",lastname);
	
	strcat(firstname,lastname);
	strcpy(fullname,firstname);
	
	printf(" \n %s",fullname);
	
//	strcpy(fullname,"osm boy");
//	printf("\n full name=%s \n length %d",fullname,strlen(fullname));
	
//	printf("\n %s",strrev(fullname));
	
	return 0;
}

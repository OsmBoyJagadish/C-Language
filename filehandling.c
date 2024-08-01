#include<stdio.h>
int main(){
	
	FILE *f;
	char c,charArray[100];
	
	f=fopen("test.txt","w+");
	fprintf(f,"new data");
	
//	while(!feof(f)){
//		printf("%c",fgetc(f));
//	}
	
	return 0;
  }

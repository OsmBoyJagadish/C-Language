#include<stdio.h>
int main()
{
	int count=1;
	osm:
	printf("%d\n",count);
	count++;
	if(count<=100){
		goto osm;
	}	
	
	return 0;
}

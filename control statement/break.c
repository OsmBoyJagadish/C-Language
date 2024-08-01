#include<stdio.h>
int main()
{
	int no;
	printf("break loop at 5");
	for(no=1;no<=10;no++)
	{
	if (no==5){
	
	break;
	}
	printf("\n %d",no);
	}
	
	return 0;
}

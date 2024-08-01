#include<stdio.h>
int main()
{
	int no;
	printf("please enter your number between 1 to 5");
	scanf("%d",&no);
	
	switch(no)
	{
		case 1: 
			printf("one");
			break;
		case 2:  
            printf("two");
			break;
		case 3: 
	    	printf("three");
			break;
		
//		default:
//		printf("not available");	
	
	}
	
	
	return 0;
}

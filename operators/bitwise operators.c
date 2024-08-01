#include<stdio.h>
int main()
{
	int a=18,b=15;
	
	printf("%d",(a&b)); //and
	printf("\n%d",(a|b)); //or
	printf("\n%d",(a^b)); //exclusive or
	printf("\n%d",(~a)); //complement
	printf("\n%d",(a<<2)); //shift left
	printf("\n%d",(a>>2)); //shift right
	
	
	
	return 0;
}

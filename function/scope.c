#include<stdio.h>
void krantiNagar(int money);  //declaration
void hanumanNagar();   //declaration
int jagadish=5;    //universal

int main(){
	printf("%d\n",jagadish);
	krantiNagar(100);  //calling
	hanumanNagar();    //calling
  //  int m;
 //  printf("%d\n",m);	
	{
		int osm=10;
		printf("%d",osm);
	}
    //	printf("%d",osm);
	return 0;
}

void krantiNagar(int money){
//	int k;
	printf("kranti nagar\n");
	printf("%d\n",money);
	printf("%d\n",jagadish);
	
}

void hanumanNagar(){
//	int h;
	printf("hanuman nagar\n");
	printf("%d\n",jagadish);
}

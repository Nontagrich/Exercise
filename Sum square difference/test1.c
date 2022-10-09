#include<stdio.h>
int main()
{
	int num,total1=0,total2=0;
	for(int i=1 ; i<=100; i++){
		total1 += i*i;
		total2 += i;
		
	}
	total2 *= total2;
	
	printf("Total1 is %d\n",total1);
	printf("Total2 is %d\n",total2);
	printf("%d - %d = %d",total2,total1,total2-total1);
}

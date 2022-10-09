#include<stdio.h>
int main()
{
	int total=0,num=1,back,dis=1,i=1;
	
	while(total<=4000000){
		
		if(num % 2 == 0){
			total += num;
		}
		if(num > dis){
			back = num;
			num += dis;
			dis = back;
			
		}else if(num == dis){
			num += dis;
		}
		
		i++;
	}
	printf("--------------------------------------------\nThe Sum of the Even-valued terms is %d\n--------------------------------------------",total);
	
	
	
	
}

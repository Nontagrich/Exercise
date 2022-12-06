#include<stdio.h>
int min(int a, int b);
int main()
{
	int water,milk,bean,cup;
	printf("Amount of Water(ml): ");
	scanf("%d",&water);
	printf("Amount of Milk(ml):");
	scanf("%d",&milk);
	printf("Amount of Coffee bean(g):");
	scanf("%d",&bean);
	printf("The Number of cups a user needs: ");
	scanf("%d",&cup);
	
	int aw,am,ab,count1,count2;
	aw = water/200;
	am = milk/50;
	ab = bean/15;
	
	count1 = min(aw, am);
	count2 = min(count1,ab);
	
	if(count2 > cup){
		printf("Yes, I can make that amount of coffee and even %d more than that.",count2-cup);
	}else if(count2 == cup){
		printf("Yes, I can make that amount of coffee.");
	}else{
		printf("No, I can make only %d cups of coffee.",count2);
	}
	
	return 0;
}

int min(int a, int b){
	return (a > b ) ? b : a;
	
}

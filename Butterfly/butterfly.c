#include <stdio.h>
int main()
{
  int n;
  int col1,col2;
  int rol1,rol2;
  printf("Enter number for create butterfly: ");
  scanf("%d",&n);
  
  for(int i=1;i<=2*n-1;i++){
  	if(i==1 || i==(2*n-1)){
  		printf("*");
	}else{
		printf(" ");
	}
  }
  int e1=1;
  printf("\n");
  for(rol1 = 2;rol1<=n;rol1++){
  	for(col1 = 1; col1<=2*n-1;col1++){
  		if(col1 <= rol1){
  			printf("*");
		  }else if(col1>=2*n-e1-1){
		  	printf("*");
		  	
		  }else {
		  	printf(" ");
		  }
		
	  }
	  e1 += 1;
	  printf("\n");
  }
  
  int e2 = 2;
  
  for(rol2 = n+1 ;rol2 <= 2*n-1 ; rol2++){
  	for(col2 = 1; col2<= 2*n-1; col2++){
  		if(col2 <= rol2-e2){
  			printf("*");
  			
		  }else if(col2>=rol2){
		  	printf("*");
		  }else{
		  	printf(" ");
		  }
		  
		  
	  }
	  e2 += 2;
	  printf("\n");
  }
  
  
  
}
#include<stdio.h>
int main()
{
    //input 
    int n;
    int rn=1;
    printf("Enter number for loop: ");
    scanf("%d",&n);

    //coding
    int rol1,rol2;
    int col1,col2;

    int e1 = 1;
    for(rol1 = 1 ; rol1 <= n-1 ; rol1++){
        for(col1 = 1 ; col1 <= 2*n-1 ;col1++){
            if(col1 <= n - e1){
                printf("-");
            }else if(col1 >= n+e1){
                printf("-");
            }else {
                printf("%d",rn);
                rn += 1;
            }
        }
        e1 += 1;
        printf("\n");
    }
    
    for(int i = 1; i <= (2*n)-1; i++){
    	printf("%d",rn);
    	rn += 1;
	}
	printf("\n");
	
	int e2 = 1;
	for(rol2 = 1 ; rol2 <= n-1 ; rol2++){
		for(col2 = 1; col2 <= 2*n-1 ; col2++){
			if(col2 <= rol2){
				printf("-");
			}else if(col2 > 2*n-1-e2){
				printf("-");
			}else{
				printf("%d",rn);
				rn += 1;
			}
		}
		e2 += 1;
		printf("\n");
	}

}
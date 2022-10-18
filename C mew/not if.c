#include<stdio.h>
int main(){
    //taxi
    int dis;
    printf("Enter distance: ");
    scanf("%d",&dis);

    while (dis>=0 && dis<20)
    {
        printf("Total is %d Baht.",dis*30);
        dis=-1;
    }
    while (dis>=20 && dis<=49)
    {
        printf("Total is %d Baht.",dis*25);
        dis=-1;
    }
    while (dis>=50 && dis<=79)
    {
        printf("Total is %d Baht.",dis*20);
        dis=-1;
    }
    while (dis>=80)
    {
        printf("Total is %d Baht.",dis*30);
        dis=-1;
    }
    return 0;
    
}
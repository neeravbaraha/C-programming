//take 5 input from user and find the highest value position and highest value;
#include<stdio.h>
int main(){
    int num[5],max=0,pos=0;
    printf("Enter the 1 num");
    scanf("%d",&num[0]);//20
    printf("Enter the 2 num");
    scanf("%d",&num[1]);//30
    printf("Enter the 3 num");
    scanf("%d",&num[2]);//40
    printf("Enter the 4 num");
    scanf("%d",&num[3]);//50
    printf("Enter the 5 num");
    scanf("%d",&num[4]);//60
    for(int i=0;i<5;i++){
       if (num[i]>max){
        max=num[i];
        pos=i;
       }
    }
    printf("highest:%d",max);
    printf("Position is %d",pos+1);
}
//read 5 number and find the sum of all value
#include<stdio.h>
int main(){
    int num[5],odd=0;
    printf("Enter the num");
    scanf("%d",&num[0]);
    printf("Enter the num");
    scanf("%d",&num[1]);
    printf("Enter the num");
    scanf("%d",&num[2]);
    printf("Enter the num");
    scanf("%d",&num[3]);
    printf("Enter the num");
    scanf("%d",&num[4]);
    for(int i=0;i<5;i++){
        if(num[i]%2!=0){
            odd+=num[i];
        }
    }
        printf("The sum of all the odd number is %d",odd);
}
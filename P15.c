//take two number from user and find they are multiple or not with each other or not
#include<stdio.h>
int main(){
    int num1;
    int num2;
    printf("Enter Num1");
    scanf("%d",&num1);
    printf("Enter Num2");
    scanf("%d",&num2);
    
    if(num1%num2==0 || num2%num1 == 0){
        printf("Multipled");
    }
    else{
        printf("NotMultiple");
    }
}
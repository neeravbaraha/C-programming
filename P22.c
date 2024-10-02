//check wheather the given number is +ve even/odd or -ve even/odd or 0;
#include<stdio.h>
int main(){
    int num;
    printf("Enter the num");
    scanf("%d",&num);
    if(num%2==0 && num>0){
        printf("Positive Even");
    }
    else if(num%2!=0 && num>0){
        printf("PositiveOdd");
    }
    else if(num%2==0 && num<0){
        printf("Negative even");
    }
    else if(num%2!=0 && num<0){
        printf("negative odd");
    }
    return 0;

}
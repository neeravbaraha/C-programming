//calculate the sum of all nunber not divisible by 17 between integer numbers
#include<stdio.h>
int main(){
    int num1,num2,i,sum=0;
    printf("Enter the num1");
    scanf("%d",&num1);
     printf("Enter the num2");
    scanf("%d",&num2);
    if(num1>num2){
        for(i=num2;i<=num1;i++){
            printf("%d ",i);
        if(i%17!=0){
            sum+=i;
        }
    }
    printf("SUM=%d",sum);
    }
    else if(num1<num2){
        for(i=num1;i<=num2;i++){
            printf("%d ",i);
        if(i%17!=0){
            sum+=i;
        }
    }
    printf("SUM=%d",sum);
    }
return 0;
}
//arrange in ascending order /descending order of the two input number
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your number 1\n");
    scanf("%d",&a);
    printf("Enter your number 2\n");
    scanf("%d",&b);
    printf("The order you printed %d%d",a,b);
    if(a>b){
        printf("descending order");
    }
    else{
        printf("ascending order");
    }
    
}
//Program that read two num and divide first by second ;

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two num");
    scanf("%d%d",&num1,&num2);
    if(num1%num2==0)
{
    printf("First num is divisible by second %d",num1/num2);

}
else{
    printf("Division not possible");
}
return 0;
}

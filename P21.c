//print the square of all the even number
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){ //looping from 2 because 1 is odd num
        if(i%2==0){
        printf("the square is %d \n",i*i);}

    }
    }

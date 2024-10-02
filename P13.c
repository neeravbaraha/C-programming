//take 5 input from add the sum of all odd number

#include<stdio.h>
int main(){
    int numb[5],sum=0;
    printf("First numb");
    scanf("%d",&numb[0]);
    printf("Second numb");
    scanf("%d",&numb[1]);
    printf("Third numb");
    scanf("%d",&numb[2]);
    printf("Fourth numb");
    scanf("%d",&numb[3]);
    printf("Fifth numb");
    scanf("%d",&numb[4]);

   for(int i=0;i<5;i++){
    if(numb[i]%2!=0){
        sum+=numb[i];
        printf("Sum is %d",sum);
    }

   }
}
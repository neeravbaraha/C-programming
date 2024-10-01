//Breaking amount in bank notes
#include<stdio.h>
int main(){
    int amount;
    printf("Enter your amount");
    scanf("%d",&amount);
    int hun;
    hun=amount/100;
    amount=amount%100;
    int fift=amount/50;
    amount=amount%50;
    int twenty=amount/20;
    amount=amount%20;
    int ten=amount/10;
    amount%=10;
    int five=amount/5;
    amount=amount%5;
    int two=amount/2;
    amount=amount%2;
    int one=amount/1;

    printf("%d of 100 \n %d of 50 \n %d of 20 \n %d of 10 \n %d of 5 \n %d of 2 \n %d of 1 \n",hun,fift,twenty,ten,five,two,one);
}
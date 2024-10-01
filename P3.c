// average of ITEMS by taking inputs from user
#include<stdio.h>
int main(){
   float item1,item2,wg1,wg2,total;
    float avg;
    printf("Enter Item 1");
    scanf("%f",&item1);
    printf("Enter Item2");
    scanf("%f",&item2);
    printf("Enter the weight of Item 1");
    scanf("%f",&wg1);
    printf("Enter the weight of Item 2");
    scanf("%f",&wg2);

    total=item1*wg1 + item2*wg2;//total
    avg=(total)/(item1 + item2);//average
    printf("Average value is %f",avg);
}
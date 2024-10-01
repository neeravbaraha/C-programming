//Days into years ,weeks and days
#include<stdio.h>
int main(){
    int days,year,weeks,month;
    printf("Number of days");
    scanf("%d",&days); // 1000days
    year=days/365; //1000/365-->2year
    days=days%365;//remainder ->270days
    month=days/30; //270-->9 months
    days=days%30;//0%30-->0
    weeks=days/7;//0/7--> 0--->0
    days=days%7;
    printf("%d years %d months %d weeks %d days",year,month,weeks,days);
}
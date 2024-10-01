//programm for bike average consumption.
#include<stdio.h>
int main(){
    int dis;
    float ltr,avg;
    printf("Total distance:");
    scanf("%d",&dis);
    printf("TotalfuelConsumption");
    scanf("%.2f",&ltr);
avg=dis/ltr;
printf("Average consumption(Km/ltr) %3f",avg);

}
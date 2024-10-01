//second into fragments of hours minutes and seconds
#include<stdio.h>
int main(){
    int sec;
    printf("Enter second");
    scanf("%d",&sec);
    int hour=sec/3600;
    sec%=3600;
    int min=sec/60;
    sec%=60;
    printf("H:M:S=%d:%d:%d",hour,min,sec);
}
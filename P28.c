//Write a programm to identify the quadrants
#include<stdio.h>
int main(){
    int coX,coY;
    printf("Enter Coordinate X");
    scanf("%d",&coX);
    printf("Enter the Coordinate Y");
    scanf("%d",&coY);
    //for positive X and Y coordinate that belogns to Q(+,+)
    if(coX>0 && coY>0){
        printf("QI(+,+)");
    }
    else if(coX>0 && coY<0){
        printf("QIV(+,-)");
    }
    else if(coX<0 && coY<0){
        printf("QIII(-,-)");
    }
    else if(coX<0 && coY>0){
        printf("QII(-,+)");
    }
return 0;
}
//RangeChecker 
#include<stdio.h>
int main(){
    int num;
    printf("Enter the num");
    scanf("%d",&num);
    if(num>=0 && num<=20){
        printf("Range[0,20]");
    }
else if(num>=21 && num<=40){
    printf("Range{21,40}");
}
else if(num>=41 && num<=80){
    printf("Range{41,80}");
}
else{
    printf("Enter a valid num");
}
return 0;
}
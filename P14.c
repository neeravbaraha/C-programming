//Perimeter of traingle taking input from user
#include<stdio.h>
int main(){
float a,b,c;
float perimeter;
printf("Enter three sides of traingle");
scanf("%f%f%f",&a,&b,&c);
if(c>(a+b)&& b>(a+c) && a>(b+c)){
    perimeter=a+b+c;
    printf("Perimeter is %f",perimeter);
}
else{
    printf("Can't make a traiangle");
}
}
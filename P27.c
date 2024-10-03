//mobile password programm;
#include<stdio.h>
int main(){
    int correctPass="1234";
    int userPass;
    printf("Enter your Password");
    scanf("%d",&userPass);
    while (userPass!=correctPass){
       printf("Enter your Password");
    scanf("%d",&userPass);  
    }
printf("Correct pass");
}
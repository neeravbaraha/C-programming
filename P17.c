//print all the even number when a user input the range n
#include<stdio.h>
int main(){
    int num;
    printf("Enter the num");
    scanf("%d",&num);
for(int i=1;i<=num;i++){
if(i%2==0){
    printf("%d\n",i);
}
}
}
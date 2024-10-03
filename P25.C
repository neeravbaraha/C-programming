//check odd in range and print the odd and its sum
#include<stdio.h>
int main(){
   int x,y,sum=0;
   printf("Enter the num1");
   scanf("%d",&x);
    printf("Enter the num1");
   scanf("%d",&y);
   if(x>y){
     for(int i=y;i<=x;i++){
       if(i%2!=0){
           printf("%d \n",i);
           sum+=i;
                   }
    
                           }
      printf("%d",sum);
   }
      if(x<y){
     for(int i=x;i<=y;i++){
       if(i%2!=0){
           printf("%d",i);
           sum+=i;
                   }
    
                           }
      printf("sum is%d",sum);
   }
   
}
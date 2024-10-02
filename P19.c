//read 5 num and count the positive number and print the average
#include<stdio.h>
int main(){
    float num[5];
    float pn=0,sum=0;

    printf("Enter the num");
    scanf("%f",&num[0]);
    printf("Enter the num");
    scanf("%f",&num[1]);
    printf("Enter the num");
    scanf("%f",&num[2]);
    printf("Enter the num");
    scanf("%f",&num[3]);
    printf("Enter the num");
    scanf("%f",&num[4]);
    for(int i=0;i<5;i++){
        if(num[i]>0){
            pn++;
            sum+=num[i];
           
             
        }
    }
    printf("positivecount: %f\n",pn);
            printf("sum %f\n",sum);
            printf("average is %f \n",sum/2);
            
   
}
    

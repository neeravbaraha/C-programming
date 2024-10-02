//reads 5 number and count positive and negative number
#include<stdio.h>
int main(){
    int num[5];
    int pn=0,nn=0;
    printf("Enter the 1st num");
    scanf("%d",&num[0]);
     printf("Enter the 2nd num");
    scanf("%d",&num[1]);
     printf("Enter the 3rd num");
    scanf("%d",&num[2]);
     printf("Enter the 4th num");
    scanf("%d",&num[3]);
     printf("Enter the 5th num");
    scanf("%d",&num[4]);
    for(int i=0;i<5;i++){
        if(num[i]>0){
            pn++;
        }
        else if(num[i]<0){
            nn++;
        }
    }
    printf("Positive number=%d",pn);
    printf("Negative number=%d",nn);
    return 0;
   
}
//BhaskaranFormulaaa--> 3 floating num
#include<stdio.h>
#include<math.h>
int main(){
   double a, b,c ,operation;
   printf("Enter the numbers");
   scanf("%lf%lf%lf",&a,&b,&c);
operation=b*b-4*a*c; //equation inside the sqrt
if(operation>0 && a!=0){
    operation=sqrt(operation); //enable the sqrt
    double x1,x2;
    x1=(-b+operation)/(2*a); 
    x2=(-b-operation)/(2*a);
    printf("%lf",x1);
     printf("%lf",x2);
}
else{
    printf("Muji gatilo value hal balla root pauxas jhyakney");
}
}
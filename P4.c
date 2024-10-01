//program that accepts and employee ID/Working hour amount recieve 
#include<stdio.h>
int main(){
int id,sal,hr;
printf("Enter the EmployeeID");
scanf("%d",&id);
printf("Enter the Salary Amount");
scanf("%d",&sal);
printf("Enter the working hr");
scanf("%d",&hr);
sal*=hr;//sal=sal*hr

printf("EmployeeID:%d",id);
printf("Salary:%d",sal);
}
 //Print the english month when user enter 1-12
 #include<stdio.h>
 int main(){
    int month;
    printf("Enter the month 1-12");
    scanf("%d",&month);
    switch(month){
        case 1:printf("Januuary\n");
        break;
        case 2:printf("Feburary");
        break;
        case 3:printf("March");
        break;
        case 4:printf("April");
        break;
        case 5:printf("May");
        break;
        case 6:printf("June");
        break;
        case 7:printf("July");
        break;
        case 8:printf("Aug");
        break;
        case 9:printf("Sep");
        break;
        case 10:printf("Oct");
        break;
        case 11:printf("Nov");
        break;
        case 12:printf("Dec");
        break;
        default:printf("The range lies between (1-12)");
    }
    return 0;
 }
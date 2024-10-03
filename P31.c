// find all the integer number that divide by 7 and have the remainder of 2 or 3 between given integer;

#include <stdio.h>
int main()
{
    int num1, num2, i;
    printf("Enter the first num");
    scanf("%d", &num1);
    printf("Enter the second number");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        for (i = num2; i <= num1; i++)
        {
            if (i % 7 == 2 || i % 7 == 3)
            {
                printf("%d ", i);
            }
        }
    }
    else if (num1 < num2)
    {
        for (i = num1; i <= num2; i++)
        {
            if (i % 7 == 2 || i % 7 == 3)
                printf("%d ", i);
        }
    }
    return 0;
}
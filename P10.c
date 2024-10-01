// else if concept to clear here using relational &logical operator
#include<stdio.h>
int main(){
    int p,q,r,s;//p q->35 r->15 s->46
    printf("Enter p,q,r,s");
    scanf("%d%d%d%d",&p,&q,&r,&s);
    if((p%2==0)&& q>r && s>p && (r+s)>(p+q)){
        printf("Correct value");
    }
    else{
        printf("Wrong Value");
    }
}
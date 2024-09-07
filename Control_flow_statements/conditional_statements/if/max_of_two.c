max of two numbers
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    
    if (a>b){
        printf("a is max");
    }
    else{
        printf("b is max");
    }
}

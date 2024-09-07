max of three numbers
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    printf("enter c value");
    scanf("%d",&c);
    
    if (a>b && a>c){
        printf("a is max");
    }
    else if(b>c){
        printf("b is max");
    }
    else{
        printf("c is max");
    }
}

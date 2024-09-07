 reverse of a number

#include<stdio.h>
int main(){
    int number;
    int reverse=0;
    int last_digit;
    
    printf("enter the number to reverse:");
    scanf("%d",&number);
    
    while (number>0){
        last_digit = (number%10);
        reverse=(reverse*10)+last_digit;
        number = number/10;
    }
    printf("the reverse of the number is:%d",reverse);
}

#include<stdio.h>
int main(){
    int year;
    printf("enter the year to check:");
    scanf("%d",&year);
    
    if (year%4==0){
        printf("its is leap year");
    }
    else{
        printf("not a leap year");
    }
}

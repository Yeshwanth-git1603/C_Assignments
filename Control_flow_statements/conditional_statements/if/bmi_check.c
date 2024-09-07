// BMI calculation
/*
#include<stdio.h>

int main(){
    float height;
    float weight;
    int age;
    
    printf("enter the data to check the bmi:\n");
    printf("enter the height:");
    scanf("%f",&height);
    printf("enter the weight:");
    scanf("%f",&weight);
    printf("enter the age:");
    scanf("%d",&age);
    
    
    if (age > 20 && height <= 5.8 && weight <=60){
        printf("normal bmi");
    }
    else if (age <= 20 && height >=5.8 && weight >=60){
        printf("fine bmi");
    }
    else if (age >=20 && height <=5.0 && weight <=50){
        printf("under bmi");
    }
    else{
        printf("over bmi");
    }
    
}

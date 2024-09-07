 student marks calculation
/*
#include<stdio.h>

int main(){
    int physics;
    int maths;
    int chemistry;
    
    printf("enter the physics marks:");
    scanf("%d",&physics);
    printf("enter the maths marks:");
    scanf("%d",&maths);
    printf("enter the chemistry marks:");
    scanf("%d",&chemistry);
    
    if (physics < 35 || maths<35 || chemistry<35 ){
        printf("student got failed");
    }
    else{
        printf("Student passed\n");
        int average;
        average=((physics+maths+chemistry)/3);
        printf("the average  of the student is:%d\n",average);
        int total;
        total=(physics+maths+chemistry);
        printf("the total marks of the student is:%d\n",total);
    
    if (average > 60){
        printf("student passed in first class");
    }
    else if (average <60 && average >=50){
        printf("student passed in second class");
    }
    else{
        printf("student passed in third class");
    }
    }
}

//program to check weather the number is even or odd 
#include<stdio.h>

int main (){
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if (x%2 == 0){
    printf("Number is Even");
    }
    else{
        printf("NUmber is odd");
    }
    return 0;
}
#include<stdio.h>

int main(){
    int age;
    printf("ENter age");
    scanf("%d", &age);

    age >= 18 ? printf("adult"): printf("not adult");

    return 0 ;

}
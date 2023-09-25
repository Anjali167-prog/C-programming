#include<stdio.h>

int main(){
 printf("%d",0>2 && 3>4);//And operator

 printf("%d", 5>6 || 4>1);//or operator

 printf("%d" , !(5>4));//Not operator

 printf ("%d" , !(8<7 && 4<5));

 //Assignment operator
 int a = 2;
 int b = 3;
 a += b; // a = a + b 
 printf("%d",a );
  return 0 ;  
}
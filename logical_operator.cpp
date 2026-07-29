// && logicalAND op
// || logical OR op
// ! logical NOT op

// logical and operator &&
// syntax condition1 && condition2 
// if the both the condition are true then the output is true
// otherwise print false

//Exmple
#include<stdio.h>
int main(){
    int a=10;
    int b=9;

    printf("logical and=%d\n",(a<b)&&(b<a));
    printf("logical or=%d\n",(a<b)||(b<a));
     printf("logical not=%d\n",!(a<b));
     printf("logical not=%d\n",(a<b));

    // false or 0
}
//++ increment are of two type 1. post increment 2. preincrement
           //post=a++ and pre=++a
           //++ increse the value by 1

//-- decrement post a-- and a++
// -- decreses the value by 1



# include<stdio.h>
int main(){
    int a=10;
    printf("%d\n", ++a);//pre increment 11
    printf("%d\n",a++);// post increment 11
    printf("%d\n",a);//12


    int b=10;
    printf("%d\n", --b);//pre increment 11
    printf("%d\n",b--);// post increment 11
    printf("%d\n",b);//12


    // int b;
    b= a++ + 5 ;
    printf("%d\n",a);//11
    printf("%d\n",b);//15
    // int a=10;
    // printf("%d %d",a++ ,a++);



}
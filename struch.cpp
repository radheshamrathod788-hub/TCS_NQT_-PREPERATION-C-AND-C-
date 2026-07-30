//structure pointer operator
#include<stdio.h>
struct student
{
    int roll_number;
};
int main(){
    struct student s1= {12345};
    struct student *p=&s1;
    printf("%d",p->roll_number);
}

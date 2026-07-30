//sizeof operator returns the size (in bytes) 
//of a variable or data type
//comma op ,
//address op & derefrence op *
//::
//-> structure pointer operator
#include<stdio.h>
int main(){
    int a;
    float b;
    double d;
    char ch;
    printf("int size = %zu bytes\n",sizeof(a));
    printf("float size = %d bytes\n",sizeof(b));
    printf("double size = %d bytes",sizeof(d));
}
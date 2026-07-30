//create a simple calculator using symbol + - * / %
#include<stdio.h>
int main(){
int a,b;
char ch;
printf("Enter your expression(for ex: 10+20):");
scanf("%d %c %d",&a,&ch,&b);
if ( ch=='+'){
    printf("Answer = %d\n",a+b);
}else if(ch=='-'){
    printf("Answer = %d\n",a-b);
}
else if(ch=='*'){printf("Answer = %d\n",a*b);}
else if(ch=='/'){printf("Answer = %d\n",a/b);}
}

//20+40=60

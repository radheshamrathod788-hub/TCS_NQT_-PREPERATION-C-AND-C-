//find out your lucky number
//5 lucky number 
#include<stdio.h>
int main(){
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a==7){
        printf("this is your lucky number");
    }else{
        printf("Bad luck... try for next time..");
    }
}
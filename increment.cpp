#include<stdio.h>
int main(){
    int x=0;
    if(x++){
        printf("If block exicuted");
        printf("\nvalue of x=%d",x);
    }
    else{
        printf("else block exicuted");
        printf("\nvalue of x=%d",x);
    }
}
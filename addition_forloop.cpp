#include<iostream>
using namespace std;
int main(){
    int i,addition=0;
    for (int i=1;i<=10;i++){
        addition=addition+i;
    }cout<<"Addition = "<<addition;
    cout<<"while loop\n";
    while (i<=10){
        addition=addition+i;
     
    }cout<<"while Addition = "<<addition;

int j=1;
int addition1=0;
    do{
        addition1 = addition1 +j;
        j++;
    }while(j<=10); cout<<"\ndo while addition:"<<addition1;
}

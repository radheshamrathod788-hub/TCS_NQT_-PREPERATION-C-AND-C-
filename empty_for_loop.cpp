// for (inti;condition;ince/de)
#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(;;){
        cout<<i<<" ";
        if(i==10){break;}i++;

    }
    cout<<"using j variable\n";
    for (int j=1;j<=10;j++){
        cout<<j<<" ";

    }
}
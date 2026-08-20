#include<iostream>
using namespace std;
int main(){
    int atmpin;
    int correct_pin=12345;
    do{
        cout<<"ente your atm pin:";
        cin>>atmpin;
        if (atmpin==correct_pin){
            cout<<"Access Granted.";
        
        }else{
            cout<<"Wrong pin... try again only 3 attempts";

        }
        while(atmpin!=correct_pin);
    }
}
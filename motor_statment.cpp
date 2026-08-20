#include<iostream>
using namespace std;
int main(){
    float current;
    float tem;
    cout<< "enter curent :";
    cin>>current;
    cout<<"enter temperatur:";
    cin>>tem;
    if (tem>=85 && current>=12)
    {
        cout<<"MOTOR OVERHEATING + MOTOR OVERLOAD";
    }
    else if(tem>=70 && current>=12)
    {
        cout<<"MOTOR OVERLOAD";
    }
    else if(tem>=85 &&current <=7 && current >=5)
    {
        cout<<"MOTOR OVERHEATING ";
    }
    else {
        cout<<"MOTOR RUNNING SAFLY";
    }
}
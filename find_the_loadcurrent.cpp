#include<iostream>
using namespace std;
int main (){
    float current_value;

    cout<<"enter the value on current:";
    cin>>current_value;
    if(current_value<=5)
    {cout<<"low current";}
    else if(current_value>=12 && current_value<=49 )
    {
        cout<<"higt currrent";
    }
 
    else if(current_value>=50)
    {
        cout<<" warning !!!! danger zone";
    }
    else{cout<<"normal current";}
}
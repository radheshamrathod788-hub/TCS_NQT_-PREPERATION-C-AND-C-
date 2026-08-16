#include<iostream>
using namespace std;
int main(){
    int battery_voltage;
    cout<<"battery_voltage=";
    cin>>battery_voltage;
    if(battery_voltage>=11)
    {
        cout<<battery_voltage<<"normal battery";
    }
    else{
        cout<<battery_voltage<<"low battery";
    }

}
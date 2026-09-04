#include<iostream>
using namespace std;
int main(){
    string name="radhe";
    cout<<name<<endl;
    for (int i=0;i<6; i++){
        cout<<name[i]<<" ";
        cout<<"Total length of length ="<<name.length();
        cout<<endl<<name.substr(0,6);
    }
}
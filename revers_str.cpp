#include<iostream>
using namespace std;
int main( ){
    string name="radhesham";
    cout<<"orignal name="<<name<<endl;
    for(int i=name.length()-1;i>=0;i--){
        cout<<name[i]<<" ";
    }
}
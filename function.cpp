//using reverse function
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string name="radhesham";
    string reverse_string=name;
    reverse(reverse_string.begin(),reverse_string.end());
    cout<<"Original string: "<<name<<endl;
    cout<<"Reversed string: "<<reverse_string<<endl;
}
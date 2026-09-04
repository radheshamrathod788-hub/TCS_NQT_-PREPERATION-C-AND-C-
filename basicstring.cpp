//what is the use of string
// to store text such as names sentences or words
//just like array
//char a[]="abc"; dectaration+initialisation

#include <iostream>
using namespace std;
int main(){ 
    string name="Radhe";
    cout<<name<<endl;
    for (int i=0;i<6;i++){
        cout<<name[i]<<" ";
    }
}
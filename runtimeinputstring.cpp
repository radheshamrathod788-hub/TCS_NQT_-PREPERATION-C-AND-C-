//length of string using runtime input
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string :";
    // cin>>str;
    getline(cin,str);//run time input string with space
    int count_lenght=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]!=' ' )
    {count_lenght++;}

    }
    cout<<"Length of the string is: "<<count_lenght<<endl;
}
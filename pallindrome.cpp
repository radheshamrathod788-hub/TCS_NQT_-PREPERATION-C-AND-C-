//what is pallindrome
//left to right == right to left
#include<iostream>
using namespace std;
int main(){
    string name="madam";
    string reversestring="";
    for (int i=name.length()-1;i>=0;i--){
        reversestring=reversestring+name[i];
    }//chack it is pallindrome or not
    if (name==reversestring){
        cout<<"it is pallindrome";
    }
    else{
        cout<<"it is not pallindrome";
    }
}
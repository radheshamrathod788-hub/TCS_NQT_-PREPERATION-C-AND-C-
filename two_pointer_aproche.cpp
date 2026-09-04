//find pallindrome using two pointer approch
#include<iostream>
using namespace std;
int main(){
    string name="madam";
    int firstpointer=0;
    int lastpointer=name.length()-1;
    bool palindrome=true;
    while(firstpointer<lastpointer){
        if(name[firstpointer]!=name[lastpointer]){
            palindrome=false;
            break;
        }
        firstpointer++;
        lastpointer--;
    }
    if(palindrome){
        cout<<"it is pallindrome";
    }
    else{
        cout<<"it is not pallindrome";
    }

}
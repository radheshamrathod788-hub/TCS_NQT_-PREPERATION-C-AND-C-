#include<iostream>
using namespace std;
int main(){
    int number,reverse_number=0;
    cout<<"enter any number:";
    cin>>number;
    int number2=number;
    while(number!=0){
        reverse_number=reverse_number*10+number%10;
        number=number/10;
    }
    cout<<"Reverse Number:"<<reverse_number;
   if(number2==reverse_number){
    cout<<"\n"<<number2<<" Number is pallindrome\n";
   }else{cout<<"Not a pallindrome";}

}
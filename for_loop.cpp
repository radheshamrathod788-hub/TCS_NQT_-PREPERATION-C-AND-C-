
//it is not ready
#include<iostream>
using namespace std;
int main(){
    int num,reverse_number=0,count_var=0,actual_number;
    
    cout<<"enter any number:";
    cin>>num;//scanth evariable run time input
    actual_number=num;
    for (num =0;num>0;num++)
    {int digit=num%10;
        reverse_number=reverse_number*10+digit;
        count_var++;
        num=num/10;

    }
    cout<<"reverse_number="<<reverse_number;
}

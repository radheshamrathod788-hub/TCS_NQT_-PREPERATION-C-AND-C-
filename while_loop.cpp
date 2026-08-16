
//print the reverse number
//58321==> 12385  total digits count =>5 digits 
#include<iostream>
using namespace std;
int main(){
    int num,reverse_number=0,count_var=0,actual_number;
    
    cout<<"enter any number";
    cin>>num;//scanth evariable run time input
    actual_number=num;

    while(num>0){
        int digit=num %10;
        reverse_number=reverse_number*10+digit;
        count_var++;
        num=num/10;
        
    }
    cout<<"revers_number=\n"<<reverse_number;
    cout<<"no of digits=\n"<<count_var;

}
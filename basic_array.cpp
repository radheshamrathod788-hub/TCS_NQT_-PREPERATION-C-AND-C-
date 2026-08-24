// what is array
//what is the imp of array

#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,30,40,50};
    // cout<<"\nvalue of a="<<a[0];
    // cout<<"\nvalue of a="<<a[1];

    for (int i=0;i<5;i++){
        cout<<"\nusing for loop:";
        cout<<a[i]<<" ";
    }
    cout<<"\nusing while loop:";
    int i=0;
    while(i<5){
        cout<<a[i]<<" ";i++;}

        cout <<"\nusing do while loop";
        int j=0;
        do{ cout<< a[j]<<" ";j++;}while(j<5);
}
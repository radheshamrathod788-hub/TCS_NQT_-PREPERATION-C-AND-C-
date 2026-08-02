#include<iostream>
using namespace std;
int main(){
    int animal_legs;
    cout<<"Enter number of legs:";
    cin>>animal_legs;
    if (animal_legs==2){
        cout<<"Birds";
    }else if(animal_legs==4){
        cout<<"Dog,cat,lion.....";
    }else if(animal_legs==8){
        cout<<"spider";
    }else{
        cout<<"Unknown creature";
    }
}
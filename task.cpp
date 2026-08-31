#include<iostream>
using namespace std;
int main(){
    int proces[4][2]={{0,2},{1,2},{5,3},{6,4}};
    int row=4;
    int column=2;
    int CT;
    cout<<"CT=";
    for(int i=0;i<row;i++){
        CT=proces[i][0]-proces[i][1];
        cout<<"row"<<i<<":"<<proces[i][0]<<"-"<<proces[i][1]<<"="<<CT<<endl;
    }



}
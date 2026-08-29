#include<iostream>
using namespace std;

int main(){
    int matrix[4][3];
    int row=4;
    int cols=3;
    
    for(int i=0; i<row;i++){
        for(int j=0; j<cols;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i<row;i++){
        for(int j=0; j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    return 0;
    
   
}
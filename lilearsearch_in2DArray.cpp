//if we enter the value is exist in this matrix then 
// output is true or 1 otherwise false or 0
#include<iostream>
#include<climits>

using namespace std;

bool getmaxsum(int mat[][3],int row,int cols){
    int maxrowsum=INT_MIN;
}


int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},};
    int row=3;
    int cols=3;
    
    cout << "Max row sum: " << getmaxsum(matrix, row, cols) << endl;
    return 0;
    
   
}
#include<iostream>
#include <climits>
using namespace std;
int main(){
    int nums[]={12,44,65,66,-1,34};
    int size=6;

    int smallest= INT_MAX ;
    for (int i=0; i<size;i++){
        smallest=min(nums[i],smallest);
        smallest=nums[smallest];
        }
        cout<<"smallest="<<smallest<<endl;
        cout<<nums[smallest]<<endl;
        return 0;
    }

#include<iostream>
#include <climits>
using namespace std;
int main(){
    int nums[]={12,44,65,66,-1,34};
    int size=6;

    int smallest= INT_MAX ;
    int largest=INT_MIN;
    for (int i=0; i<size;i++){
        smallest=min(nums[i],smallest);
        largest=max(nums[i],largest);

        }
        cout<<"largest num="<<largest<<endl;
        cout<<"smallest="<<smallest<<endl;
        return 0;
    }

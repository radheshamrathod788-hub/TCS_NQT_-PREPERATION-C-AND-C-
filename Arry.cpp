// A fixed-size collection of element of the same data type, stored in contiguous memory.
//int marks[6]={90,34,56,76,60,80};
// it is stored 6 place in memory 
//

//      0 1 2 3 4 5
//all place are of 4 byte
//size of arry(markes)=6*4=24 becose each element has 4 byte
//start form 0
//memory is statically allocated at compile time.
// #include<iostream>
// using namespace std;
// int main(){
//     // int marks[5]={10,20,30,40,50};
//     // marks[0]=101;
//     // cout<<marks[0]<<endl;
//     // cout<<marks[1]<<endl;
//     // cout<<marks[2]<<endl;
//     // cout<<marks[3]<<endl;
//     // cout<<marks[4]<<endl;

//     //loop in array
//     int size=5;
//     int marks[size];
//     for (int i=0;i<size;i++){
//         cin>>marks[i];

//     }
//      for (int i=0;i<size;i++){
//         cout<<marks[i]<<endl;
//      }

//     return 0;
// }




//find smallest/largest in array
//int smalesst= INT_MAX

//nums=5 15 22 1 -15 24
//if(nums[i]<smaller)
//smallest=nums[i]
#include<iostream>
#include <climits>
using namespace std;
int main(){
    int nums[]={12,44,65,66,-1,34};
    int size=6;

    int smallest= INT_MAX ;
    for (int i=0; i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
        cout<<"smallest="<<smallest<<endl;
    }
}
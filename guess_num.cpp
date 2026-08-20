//guess the secret number

#include<iostream>
using namespace std;
int ming(){
    int secret_num=7;
    int guess_num;
    do{
        cout<<"gess the secret number:(1-10)";
        cin>>guess_num;
        if(guess_num==secret_num){
            cout<<"correct. you found the secret number.\n";}
            else{
                cout<<"wrong guess.... try again\n";
            }
        while (guess_num!=secret_num);

        }
    }
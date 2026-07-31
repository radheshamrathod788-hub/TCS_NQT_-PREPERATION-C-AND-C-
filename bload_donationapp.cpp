// create a blood donation app
// condition
// weight ==> 60 or 60+ male candidate
// weight ==> female = 50 or 50+
// age ==> 18 or 18+
// disease==>no disease 
// if sugar diabites they are not eligible


#include<iostream>
using namespace std;
int main(){

    int age ,weight;
    string disease, gender;

    cout<<"=======Blood donation eligibility app=========";

    cout<<"\nenter the gender mail/femail: ";
    cin >> gender;

    cout<<"\n enter the age:";
    cin>> age;

    cout<< "\n if you have any disease then enter the disease name:";
    cin >> disease;

    cout<< "\n inter the weight in kg:";
    cin>> weight;


    if( age>=18 &&
        disease =="no"&&
        ((gender=="male"&&weight>=60)||
        (gender=="female"&&weight==50))){
        cout<<"\n congratulation you are eligible for blood donation"<<endl;}

        else {cout<<"\nnot eligible for blood donation"<<endl;}
        return 0 ;


}


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int age, weight;
//     string gender, disease, diabetes;

//     cout << "===== Blood Donation Eligibility App =====" << endl;

//     cout << "Enter Gender (Male/Female): ";
//     cin >> gender;

//     cout << "Enter Age: ";
//     cin >> age;

//     cout << "Enter Weight (kg): ";
//     cin >> weight;

//     cout << "Do you have any disease? (Yes/No): ";
//     cin >> disease;

//     cout << "Do you have Diabetes? (Yes/No): ";
//     cin >> diabetes;

//     if (age >= 18 &&
//         disease == "No" &&
//         diabetes == "No" &&
//         ((gender == "Male" && weight >= 60) ||
//          (gender == "Female" && weight >= 50))) {

//         cout << "\nCongratulations! You are eligible to donate blood." << endl;
//     }
//     else {
//         cout << "\nSorry! You are NOT eligible to donate blood." << endl;
//     }

//     return 0;
// }
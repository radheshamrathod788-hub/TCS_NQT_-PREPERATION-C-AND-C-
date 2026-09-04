//vowels==> a e i o u
//edgucation==> e u a i o ==>5
#include <iostream>
using namespace std;
int main(){
    string str="education";
    int count_vowels=0;
    for (int i=0; str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'
        || str[i]=='o'||str[i]=='u'){
            count_vowels++;

        }
    }
    cout<<"Number of vowels in the string: "<<count_vowels;
}
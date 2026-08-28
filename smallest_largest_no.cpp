#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"enter the 4 numbers:";
    cin>>a>>b>>c>>d;

    int smallest=a;
    int largest=a;

    if ( b>largest)
        largest=b;
    
    if(c>largest)
        largest=c;

    if(d>largest)
        largest=d;
    if(b<smallest)
        smallest=b;
    if(c<smallest)
        smallest=c;
    if(d<smallest)
        smallest=d;

        cout<<"\nsmallest="<<smallest;
        cout<<"\nlargest="<<largest;

}
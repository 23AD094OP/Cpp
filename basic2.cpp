
// condition or logic wrong in this program.
// only input take ascending order
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number= ";
    cin>>a;
    cout<<"Enter the second number= ";
    cin>>b;
    cout<<"Enter the third number= ";
    cin>>c;
    if(a>b){
        cout<<a<<" is a largest number";
    }
    else if(b>c){
        cout<<b<<" is a largest number";
    }
    else{
       cout<<c<<" is a largest number";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a,b,sum,sub,mulitfly,divide,Remainder;
    cout<<"Enter the first number= ";
    cin>>a;
    cout<<"Enter the second number= ";
    cin>>b;
    sum = a + b;
    sub = a- b;
    mulitfly = a * b;
    divide = a / b;
    Remainder = a % b;
    cout<<"sum= "<<sum<<endl;
     cout<<"subtract= "<<sub<<endl;
      cout<<"multfly= "<<mulitfly<<endl;
       cout<<"divide = "<<divide<<endl;
        cout<<"Remainder=  "<<Remainder<<endl;
        return 0;
}
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
      if(a>c)
      {
        cout<<a<<" is large";
      }
    }
    
    else if(b>a){
        if(b>c)
      {
        cout<<b<<" is large";
      }
    }
    else if(c>a){
        if(c>b)
      {
        cout<<c<<" is large";
      }
    }
    else 
    {
        cout<<"invalid value";
    }
    return 0;
}    

        
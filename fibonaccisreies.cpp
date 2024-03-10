#include<iostream>
using namespace std;
int main(){
    int num,f1=0,f2=1,nextterm;
    nextterm = f1 +f2;
    cout<<"Enter the number= ";
    cin>>num;
    cout<<"Printing fibonaaci series=  ";
    if(num==1){
    cout<<f1;
    }else if(num==2){
        cout<<f1<<" "<<f2;
    }
    else{
        cout<<f1<<" "<<f2<<" ";
        for(int i=3;i<=num;i++){
            cout<<nextterm<<" ";
            f1=f2;
            f2=nextterm;
            nextterm= f1 + f2;
        }
    }
    return 0;
}
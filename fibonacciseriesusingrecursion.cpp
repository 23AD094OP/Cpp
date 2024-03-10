#include<iostream>
using namespace std;
int fibonacciseries(int num);
int main(){
    int num;
    cout<<"Enter the number= ";
    cin>>num;
    cout<<"Printing the fibonacci series=  ";
    for(int i=0;i<num;i++){
     cout<<fibonacciseries(i)<<" ";
    }
    return 0;
}
int fibonacciseries(int num){
    if(num == 0){
        return 0;
    }
    else if(num ==1)
    {
        return 1;
    }
    else {
        return fibonacciseries(num-1) + fibonacciseries(num-2);
    }
}
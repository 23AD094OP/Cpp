#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number for 1 to where sum= ";
    cin>>num;
    for(int i=1;i<=num;i++){
        sum = sum + i;
    }
    cout<<"sum of "<<num<<" number = "<<sum;
    return 0;
}
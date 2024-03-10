#include<iostream>
using namespace std;
int main(){
    int num,a,sum=0;
    cout<<"Enter the number= ";
    cin>>num;
    for(int i=1;i<=num;i++){
        cout<<"Enter the "<<i<<"st number = ";
        cin>>a;
        sum = sum + a;
    }
    cout<<"sum of "<<num<<"random number = "<<sum;
    return 0;
}
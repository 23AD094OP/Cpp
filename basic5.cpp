#include<iostream>
using namespace std;
int main(){
    int n,arr[n],sum=0;
    cout<<"Enter the size of array= ";
    cin>>n;
    cout<<endl<<"Enter the array element = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
      sum = sum + arr[i];
    }
    cout<<"Sum of array elements= "<<endl<<sum;
    return 0;
}
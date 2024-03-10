#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%2==0){
        goto even;
    }
    else{
        goto odd;
    }
    even:
    cout<<"the number is even";
     goto exit;
    odd:
    cout<<"the number is odd";
    goto exit;

    exit:
    return 0;
}
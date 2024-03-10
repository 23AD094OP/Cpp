#include<iostream>
using namespace std;
int main(){
    int price;
    cout<<"Enter the price of book= ";
    cin>>price;
    if(price<=600){
        cout<<"you are suitable for book buying.and price is "<<price;
    }
    else{
        cout<<"You can't buy the book.";
    }
    return 0;
}
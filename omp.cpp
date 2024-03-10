#include<iostream>
using namespace std;
int main(){
    int price;
    cout<<"Enter the price of book= ";
    cin>>price;
    if(price<=600){
        cout<<"you are suitable for book buying.";
    }
    else{
    	cout<<"you can't buy book";
	}
    return 0;
}

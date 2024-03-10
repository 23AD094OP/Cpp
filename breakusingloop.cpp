#include<iostream>
using namespace std;
int main(){
    
    con:
    int n,i;
    cout<<"Enter the number:- ";
    cin>>n;
    for(i=1;i<=n;i++){
            if(i==5 ){
                goto con;
            
        }
        cout<<i<<" ";

        
    }
    return 0;
}

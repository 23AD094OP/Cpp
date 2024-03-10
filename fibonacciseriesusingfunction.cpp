#include<iostream>
using namespace std;
void fibonacciseries(int num);
int main(){
    int num;
    cout<<"Enter the number= ";
    cin>>num;
    fibonacciseries(num);
    return 0;
}
void fibonacciseries(int num)
{
    int f1=0,f2=1;
   int  nextterm = f1 +f2;
   if(num==1){
    cout<<f1;
   }else if(num == 2){
     cout<<f1<<" "<<f2;
   }
   else {
    cout<<f1<<" "<<f2<<" ";
    for(int i=3;i<=num;i++){
        cout<<nextterm<<" ";
        f1=f2;
        f2=nextterm;
        nextterm= f1 + f2;
    }

   }
}
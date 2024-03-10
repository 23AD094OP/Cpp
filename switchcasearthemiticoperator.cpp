#include<iostream>
using namespace std;
int main(){
     int a,b;
     int result,result1;
     char Operator;
     cout<<"Enter the first number= ";
     cin>>a;
     cout<<"Enter the second number= ";
     cin>>b;
     cout<<"choice one operator in this('+,-,*,/,%,) or a(pre-increament),b(post-increament)= ";
     cin>>Operator;
     switch(Operator){
        case '+':
        result = a + b;
        cout<<result;
        break;
        case '-':
        result = a - b;
        cout<<result;
        break;
        case '*':
        result = a * b;
        cout<<result; 
        break;
        case '/':
        if(b == 0)
        {
         cout<<"undefined";
        }
        result = a / b;
        cout<<result;
        break;
        case '%':
        result = a % b;
        cout<<result;
        break;
        case 'a':
        result = ++a;
        cout<<result;
        break;
        case 'b':
        result =b++;
        result1=b;
        cout<<result<<endl<<result1;
        break;
        default:
        cout<<"out desin.";

     }
return 0;
}
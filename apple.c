#include<stdio.h>
int main(){
    float aprice=38.25,bprice=40.25,total_cost;
    int iapple=10,ibanana=20;
    float atotal = iapple*aprice; 
    float btotal = ibanana*bprice;
    float itotal_cost = atotal + btotal;
    float tax = 0.13;
    total_cost = itotal_cost +  (atotal + btotal)*tax;
    printf(" Total cost of item = %.3f",total_cost);
    return 0;
}
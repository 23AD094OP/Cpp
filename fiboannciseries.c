#include<stdio.h>
int fibnoannicseries(int num);
int main(){
    int num;
    printf("Enter the number= ");
    scanf("%d",&num);
    printf("printing fibonaaci series=  ");
    for(int i=0;i<num;i++){
    printf("%d ",fibnoannicseries(i));
    }
    return 0;
}
int fibnoannicseries(int num){
    if(num==0){
        return 0;
    }else if(num == 1){
        return 1;
    }
    else{
     return fibnoannicseries(num-1)+fibnoannicseries(num-2);
    }
}
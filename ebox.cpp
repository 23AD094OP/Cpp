#include<iostream>
using namespace std;

int  main(){
  int  total_student, number_teams;
 cout<<"Enter the number of students in the class"<<endl;
cin>>total_student;
cout<<"Enter the number of teams"<<endl;
cin>>number_teams;
int teamstd = number_teams * 7;
int left_std =  total_student - number_teams*7;


cout<<"The number of student in each team is 7  and the number of students left out is "<<left_std;
return 0;
}
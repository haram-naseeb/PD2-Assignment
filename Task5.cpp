#include<iostream>
using namespace std;
main()
{
string name;
int weight,day;
cout << "Enter the name of person" <<endl;
cin>>name;
cout << "Enter the target weight loss in kilograms:"<<endl;
cin>>weight;
day=15*weight;
cout<< name<<" will need "<<day<<" days to lose "<<weight<<" kg weight by following the doctor's suggestions"<<endl;
} 

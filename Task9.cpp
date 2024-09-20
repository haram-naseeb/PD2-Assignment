#include<iostream>
using namespace std;
main()
{
int no,x,y,m,n,a,b,sum;
cout<< "Enter a 4 digit number: "<<endl;
cin>>no;
x=n/1000;
y=n%1000;
m=y/100;
n=y%100;
a=n/10;
b=n%10;
sum=x+m+a+b;
cout<< "Sum of the individual digits: "<<sum<<endl;
}
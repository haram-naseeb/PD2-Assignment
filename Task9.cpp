#include<iostream>
using namespace std;
main()
{
int no,x,y,m,n,a,b;
float sum;
cout<< "Enter a 4 digit number: "<<endl;
cin>>no;
x=no%10;
y=(no/10)%10;
m=(no/100)%10;
n=(no/1000)%10;
sum=x+y+m+n;
cout<< "Sum of the individual digits: "<<sum<<endl;
}
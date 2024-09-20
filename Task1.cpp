#include<iostream>
using namespace std;
main()
{
int n,sum;
cout << "Enter the number of sides of the polygone:"<<endl;
cin >> n;
sum=(n-2)*180;
cout<<"The sum of integral angles of a "<< n <<"-sided polygon is: "<< sum <<endl;
}
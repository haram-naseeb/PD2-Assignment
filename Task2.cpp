#include<iostream>
using namespace std;
main()
{
int minute,second,total;
cout << "Number of minutes:"<<endl;
cin >> minute;
cout <<"Frames per second:"<<endl;
cin >> second;
total=minute*second*60;
cout<<"Total Number of Frames: "<< total <<endl;
} 
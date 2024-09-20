#include<iostream>
using namespace std;
main()
{
int initial,final,acc,time;
cout << "Enter Initial Velocity (m/s):"<<endl;
cin>>initial;
cout << "Enter Acceleration (m/s^2):"<<endl;
cin>>acc;
cout << "Enter time (s):"<<endl;
cin>>time;
final=(acc*time)+initial;
cout << "Final Velocity:"<<final<<endl;
}
 
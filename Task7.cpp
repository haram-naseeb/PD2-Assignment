#include<iostream>
using namespace std;
main()
{
int adult,child,adultsold,childsold,percentage,total,donation,remaining;
string movie;
cout<< "Enter the movie name: "<<endl;
cin>>movie;
cout<< "Enter the adult ticket price: $";
cin>>adult;
cout<< "Enter the child ticket price: $";
cin>>child;
cout<< "Enter the number of adult tickets sold: "<<endl;
cin>>adultsold;
cout<< "Enter the number of child tickets sold: "<<endl;
cin>>childsold;
cout<< "Enter the percentage of the amount to be donated to the charity: "<<endl;
cin>>percentage;
total=adultsold*adult+childsold*child;
cout<< "total amount generated from ticket sales: $"<<total<<endl;
donation=total*10/100;
cout<< "donation to the charity: $"<<donation<<endl;
remaining=total-donation;
cout<< "Remaining amount after donation: $"<<remaining<<endl;
}

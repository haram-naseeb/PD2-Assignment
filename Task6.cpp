#include<iostream>
using namespace std;
main()
{
int size,cost,area,fertilizer,fertilizing;
cout<< "Enter the size of the fertilizer bag in pounds: "<<endl;
cin>> size;
cout<< "Enter the cost of the bag:$";
cin>>cost;
cout<< "Enter the area in square feet that can be covered by the bag:"<<endl;
cin>>area;
fertilizer=cost/size;
cout<< "Cost of fertilizer per pound:$"<<fertilizer<<endl;
fertilizing=cost/area;
cout<< "Cost of fertilizing per square foot:$"<<fertilizing<<endl;
}
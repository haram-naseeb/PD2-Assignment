#include<iostream>
using namespace std;
main()
{
int n,width,height,wall;
cout<< "Number of square meters you can paint: "<<endl;
cin>>n;
cout<< "Width of the single wall (in meters): "<<endl;
cin>>width;
cout<< "Height of the single wall (in meters): "<<endl;
cin>>height;
wall=n/(height*width);
cout<< "Number of walls you can paint: "<<wall<<endl;
}
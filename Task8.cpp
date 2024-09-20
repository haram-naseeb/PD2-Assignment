#include<iostream>
using namespace std;
main()
{
float earning,vegetable,fruit,totalearning;
int tvegetables,tfruits;
const float COIN_TO_RUPEES=1.94;
cout<< "Enter vegetable price per kilogram (in coins): "<<endl;
cin>>vegetable;
cout<< "Enter fruit price per kilogram (in coins): "<<endl;
cin>>fruit;
cout<< "Enter total kilograms of vegetables: "<<endl;
cin>>tvegetables;
cout<< "Enter total klograms of fruits: "<<endl;
cin>>tfruits;
earning=(vegetable*tvegetables)+(fruit*tfruits);
totalearning=earning/COIN_TO_RUPEES;
cout<< "Total earnings in Rupees: "<<totalearning<< endl;
}
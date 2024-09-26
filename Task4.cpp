#include<iostream>
using namespace std;
main()
{
float imposter,player,chance;
cout << "Enter Imposter Count: "<<endl;
cin>>imposter;
cout << "Enter Player Count: "<<endl;
cin>>player;
chance=100*(imposter/player);
cout << "Chance of being an imposter: "<<chance<<"%" <<endl;
}
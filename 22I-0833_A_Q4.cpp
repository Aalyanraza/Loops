#include <iostream>
using namespace std;

int main(){
    int popA, popB,i;
    float grA, grB;

    cout<<"Initial population of town A: ";
    cin>>popA;
    while (popA<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Initial population of town A: ";
        cin>>popA;
    }
    cout<<"Growth Rate of town A: ";
    cin>>grA;
    while (grA<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Growth Rate of town A: ";
        cin>>grA;
    }
    cout<<endl;

    cout<<"Initial population of town B: ";
    cin>>popB;
    while (popB<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Initial population of town B: ";
        cin>>popB;
    }
    cout<<"Growth Rate of town B: ";
    cin>>grB;
    while (grB<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Growth Rate of town B: ";
        cin>>grB;
    }
    cout<<endl;

    if (grA<=grB)
        cout<<"Growth rate of A should be greater.\n";
    else
    { 
        for ( i=0; popA<=popB; i++)
        {
            popA += (popA*(grA/100));
            popB += (popB*(grB/100));
        }
        cout<<"It takes "<<i<<" years for population of A to increase\n";
        cout<<"Population of A: "<<popA<<endl;
        cout<<"Population of B: "<<popB<<endl;
    }    
return 0;}
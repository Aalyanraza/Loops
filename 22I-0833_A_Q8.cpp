#include <iostream>
using namespace std;

int main(){
    int units, rent, rent_increase, maintainence, profit, maxprofit=0, ans, ideal_rent;
    
    //Taking Inputs
    cout<<"Enter the amount of apartment units: ";
    cin>>units;
    while (units<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"\nEnter the amount of apartment units: ";
        cin>>units;
    }
    cout<<"Rent to occupy all the units: ";
    cin>>rent;
    while (rent<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Rent to occupy all the units: ";
        cin>>rent;
    }
    cout<<"Increase in Rent that Results in a Vacant Unit: ";
    cin>>rent_increase;
    while (rent_increase<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Increase in Rent that Results in a Vacant Unit: ";
        cin>>rent_increase;
    }
    cout<<"Enter the amount to maintain a rented unit: ";
    cin>>maintainence;
    while (maintainence<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter the amount to maintain a rented unit: ";
        cin>>maintainence;
    }

    for ( int i=0; i<50; i++ )
    {
        profit=0;
        profit=( units-i )*rent-(units-i)*maintainence;//profit=revenue-cost
        if (profit>maxprofit)//if this profit is greater than max profit
        {
            ans=i;//ideal numer of rooms is saved
            ideal_rent=rent;//ideal rent condition is saved
            maxprofit=profit;//maxprofit is updated
        }
        rent+=rent_increase;//to check next condition
    }
    //Displaying results
    cout<<"\nNumber of units to rent: "<<units-ans<<endl;
    cout<<"Amount to charge for rent: "<<ideal_rent<<"\n\n";

return 0;}    
#include<iostream>
using namespace std;

int main (){
    int numlock;
    int closedcount=0, opencount=0, locker=2;
    
    cout<<"No. of lockers: ";
    cin>>numlock;
    while (numlock<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"No. of lockers: ";
        cin>>numlock;
    }
    
    for(int i=1; i<=numlock; i++)
    {   
        locker=1;
        for (int j=1; j<=(i/2); j++)
        {
            if (i%j==0)
                locker++;
        }
    if (locker%2==0)
        closedcount++;
    else
        opencount++;
    }
    cout<<"Closed: "<<closedcount;
    cout<<"\nOpen: "<<opencount<<endl;
return 0;}        





































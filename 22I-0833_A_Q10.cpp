#include <iostream>
using namespace std;

int main(){
    int n, pair, oldpair, pair1, newpair, pair2;

    cout<<"Number of months: ";
    cin>>n;
    while (n<0)
    {
        cout<<"Invalid Input\n";
        cout<<"Number of months: ";
        cin>>n;
    }    

    pair1=1;
    pair2=2;
    pair=pair1+pair2;

    int i=0;
    while (i<=n)
    {  
        if (i%2==0)
        {   
            if(i==0)
            {
                cout<<"After "<<i<<" months\n";
                cout<<"New Pair: "<<'0'<<"\tOld Pair: "<<'1'<<endl;
                cout<<"Total Pairs: "<<pair1<<endl<<endl;
            }
            else if(i==2)
            {
                cout<<"After "<<i<<" months\n";
                cout<<"New Pair: "<<'1'<<"\tOld Pair: "<<'1'<<endl;
                cout<<"Total Pairs: "<<pair2<<endl<<endl;

            }
            else
            {   
                pair=pair1+pair2;
                cout<<"After "<<i<<" months\n";
                cout<<"New Pair: "<<pair1<<"\tOld Pair: "<<pair2<<endl;
                cout<<"Total Pairs: "<<pair<<endl<<endl;
                pair1=pair2;
                pair2=pair;
            }    
        }
    i++;    
    } 
return 0;}
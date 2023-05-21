#include <iostream>
using namespace std;

int main(){
    int i=0,x;
    
    cout<<"Enter value of x= ";
    cin>>x;
    while (x<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter value of x= ";
        cin>>x;
    }
    cout<<endl;
    
    if (x<=0)
        cout<<"Please enter an integer greater than 0\n";
    else
    {    
        for (i=0; x>1; i++)
        {
            if( x%2==0)
            {    
                cout<<x<<" is even, so I take half: ";
                x/=2;
                cout<<x<<endl;
            }    
            else
            {
                cout<<x<<" is odd, so I make 3n+1: ";    
                x=(3*x+1);
                cout<<x<<endl;
            }    
        }
        cout<<endl<<"k= "<<i<<endl;
    }
return 0;}
#include <iostream>
using namespace std;

int main(){
    int num1 , num2, i, sum, squaresum;
    
    //a.
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    i=num1+1;

    while (num1>=num2)
    {
        cout<<"Number 2 should be greater..\n";
        cout<<"Enter Number 1: ";
        cin>>num1;
        cout<<"Enter Number 2: ";
        cin>>num2;
    }

    //b.
    if ( num1%2==1 && num2%2==1 && num2-num1==2)    
        cout<<"\nNo odd Numbers between "<<num1<<" and "<<num2<<endl;
    else
    {
        i=num1+1;
        cout<<"\nOdd Numbers are: ";
        while ( i<num2 )
        {
            if ( i%2==0 )
            {
                i++;
                continue;
            }    
            else 
                cout<<' '<<i++;   
        }
        cout<<endl;
    }    

    //c.
    i=num1+1;
    sum=0;
    cout<<"\nSum of even number between "<<num1<<" and "<<num2<<" is ";
    while ( i<num2 )
    {
        if ( i%2==0 )
        {
          sum+=i++;  
        }    
        else 
            i++;
            continue;
    }
    cout<<sum<<endl<<endl;

    //d.
    i=1;
    cout<<"NUMBER\tSQUARE\n" ;   
    while(i<=10)
    {
        cout<<"   "<<i<<"\t  "<<i*i<<endl;
        i++;
    }
    
    //e.
    i=num1+1;
    squaresum=0;
    while ( i<num2 )
    {
        if ( i%2==0 )
        {
            i++;
            continue;
        }    
        else 
        {
            squaresum+=(i*i);
            i++;
        }      
    }  
    cout<<"\nSum of the Squares of the Odd numbers Between "<<num1<<" and "<<num2<<": "<<squaresum<<endl;      

    //f.
    if ( num2<65 || num1>90)
        cout<<"\nThere is no uppercase letters between "<<num1<<" and "<<num2<<endl;
    else
    {
        cout<<"\nUpercase Letters between "<<num1<<" and "<< num2<<" are:"<<endl;
        for ( i=num1; i<num2; i++)
        {
            if (i>64 && i<91 )
            cout<<char(i)<<' ';
        }
        cout<<endl;
    }
return 0;}    
#include <iostream>
using namespace std;

int main()
{
    int num, temp, h, n, i;
    
//a.
    cout<<"A.\nEnter Number: ";
    cin>>num;
    while (num<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter Number: ";
        cin>>num;
    }        
    
    temp=num;
    for(int i=1; i<num; i++)
    {
        int temp2=i*2-1;
	    for(int j=1;j<=temp-i;j++)
	        cout<<" ";

	    for(int k=1; k<=temp2; k++)
	    {
	        if(i<=num/2)
	            cout<<" ";
	        else if( i==(num/2)+1)
	            cout<<"*";
	        else if( k==1 || k==temp2)
	            cout<<"*";
	        else if( i==num-1)
	            cout<<" ";
	        else 
                cout<<" ";
	    }

    if ( i>3)    
        cout<<endl;
    }    

    for( int i=1; temp>=1; i++ )
    {
        temp=(num-i)*2-3;
        for (int j=0; j<=i; j++)
        {
            cout<<' ';
        }
        for (int j=1; j<=temp; j++ )
        {
            cout<<'*';
        }
        cout<<endl;
        temp-=2;
    }

//b.
    cout<<"\nB.\nEnter Number: ";
    cin>>num;
    while (num<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter Number: ";
        cin>>num;
    }
    temp=(2*num)-1;
    for ( int i=1; i<=num; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<'*';
        }
        for (int j=1; j<=temp; j++)
        {
            cout<<' ';
        }
        for(int j=1; j<=i; j++)
        {
            cout<<'*';
        }
        cout<<endl;
        temp-=2;
    }
    temp=1;
    for ( int i=num-1; i>=1; i-- )
    {
        temp+=2;
        for ( int j=1; j<=i; j++)
        {
            cout<<'*';
        }
        for ( int j=1; j<=temp; j++ )
        {
            cout<<' ';
        }
        for ( int j=1; j<=i; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }

//c.
    cout<<"\nC.\nEnter Height of Pyramid: ";
    cin>>h;
    while (h<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter Height of Pyramid: ";
        cin>>h;
    }
    cout<<"Enter Number of Pyramid: ";
    cin>>n;
    while (n<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter Number of Pyramid: ";
        cin>>n;
    } 

    for ( int i=1; i<=h; i++)
    {
        temp=2*i-1;
        for( int k=1; k<=n; k++)    
        {    
            for ( int j=(h-i); j>=1; j--)
            {
                cout<<' ';
            }
            for ( int j=1; j<=temp; j++)
            {
                cout<<'*';
            }
            for ( int j=(h-i); j>=1; j--)
            {
                cout<<' ';
            }
        }
    cout<<endl;    
    }
    cout<<endl;

//d.
    cout<<"D.\nEnter Height of Pyramid: ";
    cin>>h;
    while (h<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter Height of Pyramid: ";
        cin>>h;
    }
    cout<<"Enter Number of Pyramid: ";
    cin>>n;
    while (n<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter Number of Pyramid: ";
        cin>>n;
    }

    for ( int i=1; i<=h; i++)
    {
        for( int k=1; k<=n; k++)    
        {   if(i==1)
            {
            for ( int j=(h-1); j>=1; j--)
            {
                cout<<' ';
            }
            cout<<'*';
            for ( int j=(h-1); j>=1; j--)
            {
                cout<<' ';
            }
            }
            else if (i==h)
            {
                temp=2*h-1;

                for ( int k=1; k<=temp; k++)
                {
                    cout<<'*';
                }
            }
            else
            {
                temp=2*i-3;
                for ( int j=(h-i); j>=1; j--)
                {
                    cout<<' ';
                }
                cout<<'*';
                for ( int j=1; j<=temp; j++)
                {
                    cout<<' ';
                }
                cout<<'*';
                for ( int j=(h-i); j>=1; j--)
                {
                    cout<<' ';
                }
            }    
        }
    cout<<endl;    
    }
return 0;}
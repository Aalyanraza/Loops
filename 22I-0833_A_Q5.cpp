#include <iostream>
using namespace std;

int main(){
    int num=0 , i , lastnum , n=0 ;
        
    cout<<"Enter number: ";
    cin>>num;
    if (num<0)
        num*=(-1);

    for ( i=1; num>0; i++)
    {
        lastnum = 0;
        if ( i%2==0 )
        {
            lastnum=num%10;
            n-=lastnum;
            num/=10;
        }
        else
        {
            lastnum=num%10;
            n+=lastnum;
            num/=10;
        }                
    }

    if ( n%11==0)
    {
        cout<<"Divisible\n";
    }
    else
    {
        cout<<"Indivisible"<<endl;
    }

return 0;}    













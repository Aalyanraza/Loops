#include <iostream> 
using namespace std;

int main(){
    float loanamount, interest, monthlypay,percent,result, deduction,i=1;
    
    cout<<"Enter Loan Amount: ";
    cin>>loanamount;
    while (loanamount<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter Loan Amount: ";
        cin>>loanamount;
    }
    cout<<"Enter Interest Rate per Year: ";
    cin>>interest;
    while (interest<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter Interest Rate per Year: ";
        cin>>interest;
    }
    cout<<"Enter Monthly Payment: ";
    cin>>monthlypay;
    while (monthlypay<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Enter Monthly Payment: ";
        cin>>monthlypay;
    }

    percent= (interest/12)/100;
    
    for (i=0; loanamount>=0; i++)
    {
        result=loanamount*percent;
        deduction= monthlypay - result;
        loanamount-= deduction;

        if (monthlypay<= result )
        {
            cout<<"Invalid Input..\n";
            return 0;
        }
    }
    cout<<i<<" months are required to pay this loan.\n";
}
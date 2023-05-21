#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    /*
    
    To find radius of cone we can use pythagorus theorum:
    Square(radius_cirlcle)[r1]= square(radius_cone)[r2]+ square(height_cone)[h]
    r2 = sqrt(square(r1)-sqaure(h))

    putting value of r2 in volume(V) formula of cone
    V= (pi*h*square(r2))/3
    V= (pi/3)*(square(r1)*h-cube(h)
    Derivative of this equation gives
    r2=sqrt(2/3)*r1
    
    Solving further we get the length of circle(ans) cut for maximum volume
    ans= (2*pi*r1)-(sqrt(2/3)*r1*pi*2) 
    
    */

    float rad,ans,circumference ;
    const float pi=3.14;

    cout<<"Radius of circle: ";
    cin>>rad;
    while (rad<=0)
    {
        cout<<"Invalid Input\n";
        cout<<"Radius of circle: ";
        cin>>rad;
    }
    
    circumference= 2*pi*rad;
    ans= circumference- (sqrt(0.6666)*circumference);
    cout<<setprecision(2)<<fixed<<ans<<endl;
return 0;}    
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a, b, c, d;
    cin>>a>>b>>c;
    d = (a+b)*c/2;
    cout<<"Trapezoid area:";
    cout  <<  fixed <<  setprecision(1) <<  d  <<  endl;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a, b, c;
    cin>>a>>b;
    c = a*b/2;
    cout  <<  fixed <<  setprecision(1) <<  c  <<  endl;
}
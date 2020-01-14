#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    double a,b;
    while(cin>>a){
        b = (9*a)/5 + 32;
        cout << fixed << setprecision(1) << b << endl;
    }
}
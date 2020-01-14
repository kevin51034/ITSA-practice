#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int a;
    double b;
    while(cin>>a){
        b = a*1.6;
        b = b*10 + 0.5;
        b = floor(b);
        b = b/10;
        cout << fixed << setprecision(1) << b << endl;
    }
}
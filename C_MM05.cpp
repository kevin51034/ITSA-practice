#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double a, b;
    while(cin >> a)  
    {  
        b = a * a;  
        b = b * 10 + 0.5;  
        b = floor(b);  
        b = b  / 10;  
        cout << fixed << setprecision(1) << b << endl;  
    }
}
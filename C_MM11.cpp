#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int price, a, b, c;
    while(cin>>price){
        a = price/10;
        b = price%10/5;
        c = price%10%5;
        cout << "NT10=" << a << endl;  
        cout << "NT5=" << b << endl;  
        cout << "NT1=" << c << endl;
    }
}
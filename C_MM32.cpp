#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a;
    double Armstrong, b, c, d;  
    while(cin>>a){
        b = floor(a/100);
        c = a/10%10;
        d = a%10;
        Armstrong = pow(b,3)+pow(c,3)+pow(d,3);
        if(a == Armstrong){  
            cout << "Yes" << endl;  
        }
        else{
            cout << "No" << endl;  
        }
    }
}
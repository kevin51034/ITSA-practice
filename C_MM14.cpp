#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a, b, c, d, e;
    while(cin>>a){
        b = floor(a / 86400);  
        c = floor((a % 86400)/3600);  
        d = floor((a % 86400 % 3600)/60);  
        e = a % 86400 % 3600 % 60;  
        cout << b << " days" << endl;  
        cout << c << " hours" << endl;  
        cout << d << " minutes" << endl;  
        cout << e << " seconds" << endl;
    }
}
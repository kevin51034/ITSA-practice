#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a;
    double price;
    while(cin>>a){
        if(a >= 0 && a <= 800){  
            price = (double)a * 0.9;  
            cout << fixed << setprecision(1) << price << endl;  
        }  
        else if(a > 800 && a < 1500){  
            price = (double)a * 0.9 * 0.9;  
            cout << fixed << setprecision(1) << price << endl;  
        }  
        else if(a >= 1500){  
            price = (double)a * 0.9 * 0.79;  
            cout << fixed << setprecision(1) << price << endl;  
        }  
    }
}
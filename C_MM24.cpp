#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a, b;  
    double salary;  
    while(cin>>a>>b){
        if(a >= 0 && a <= 60){
            salary = a * b;  
            cout << fixed << setprecision(1) << salary << endl;  
        }  
        else if(a > 60 && a <= 120){
            salary = 60 * b + ((a-60) * b * 1.33);  
            cout << fixed << setprecision(1) << salary << endl;  
        }  
        else if(a > 120){
            salary = 60 * b + 60 * b * 1.33 + ((a-120) * b * 1.66);  
            cout << fixed << setprecision(1) << salary << endl;  
        }  
    }  
}
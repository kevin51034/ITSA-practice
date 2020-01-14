#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a;
    long long int b = 1;
    while(cin>>a){
        if(a > 0 && a < 20){
            for(int i = 1; i <= a; i++){  
                b = b * i;  
            }  
            cout << b << endl;  
            b = 1;  
        } 
    }
}
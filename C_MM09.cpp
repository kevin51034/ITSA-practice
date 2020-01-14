#include <iostream>
#include <iomanip>
#include <math.h>  
using namespace std;

int main(){
    int a,b;
    
    while(cin>>a){
        b = pow(2,a);
        if(a>31){
            cout << "Value of more than 31" << endl;
        }
        else{
            cout << b << endl;
        }
    }
}
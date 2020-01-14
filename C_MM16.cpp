#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a, b;
    while(cin>>a>>b){
        if((a*a + b*b) <=10000){  
            cout << "inside" << endl;  
        }  
        else{  
            cout << "outside" << endl;  
        }    
    }
}
#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a, b;
    while(cin>>a>>b){
        if(a >= 0 && a <=100 && b >= 0 && b <=100){  
            cout << "inside" << endl;  
        }  
        else{  
            cout << "outside" << endl;  
        }    
    }
}
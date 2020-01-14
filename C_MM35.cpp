#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a;  
    while(cin>>a){
        if(a%4 == 0){
            if(a%100 != 0 || a%400 == 0){
                cout << "Bissextile Year" << endl;  
            }
            else{
                cout << "Common Year" << endl;  
            }
        }
        else{
            cout << "Common Year" << endl;  
        }
    }
}
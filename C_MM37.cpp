#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a,b;  
    while(cin>>a>>b){
        if(a == 0 && b == 0){
            cout << "Origin" << endl;  
        }
        else if(a != 0 && b == 0){
            cout << "x-axis" << endl;  
        }
        else if(a == 0 && b != 0){
            cout << "y-axis" << endl;  
        }
        else {
            if(a > 0 && b > 0){
                cout << "1st Quadrant" << endl;  
            }
            else if(a < 0 && b > 0){
                cout << "2nd Quadrant" << endl;  
            }
            else if(a < 0 && b < 0){
                cout << "3rd Quadrant" << endl;  
            }
            else{
                cout << "4th Quadrant" << endl;  
            }
        }
    }
}
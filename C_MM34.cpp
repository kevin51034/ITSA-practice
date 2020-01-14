#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a;  
    while(cin>>a){
        for(int i=1;i<=a;i++){
            if(a%i == 0){
                if(i == a){
                    cout << i << endl;  
                }  
                else{
                    cout << i << " ";  
                }
            }
        }
    }
}
#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a;
    while(cin>>a){
        for(int i=1;i<=a;i++){
            if(i%35 ==0){
                if(a - i < 35){  
                    cout << i;  
                }  
                else{
                    cout << i << " ";  
                }
            }
        }
        cout << endl;
    }
}
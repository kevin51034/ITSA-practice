#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a;
    int flag = 1;
    while(cin>>a){
        for(int i=a-1;i>0;i--){
            for(int j=1;j<a;j++){
                if(i%j ==0 && i!=j && i!=1 && j!=1 && i!=a && j!=a){
                    flag = 0;  
                }  
            }  
            if(flag == true){  
                cout << i << endl;  
                break;
            }  
            flag = 1;  
        }  
    }  
}
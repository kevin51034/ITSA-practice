#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a, b;
    while(cin>>a>>b){
        if(a>b){
            for(int i=b;i>=0;i--){
                if(a%i==0 && b%i==0){
                    cout<<i<<endl;
                    break;
                }
            }
        }
        else{
            for(int i=a;i>=0;i--){
                if(a%i==0 && b%i==0){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}
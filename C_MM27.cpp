#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a,b;
    int sum = 0;
    while(cin>>a>>b){
        if(a>b){
            for(int i=b;i<=a;i++){
                sum+=i;
            }
        }
        else{
            for(int i=a;i<=b;i++){
                sum+=i;
            }
        }
        cout << sum << endl;
        sum = 0;
    }  
}
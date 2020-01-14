#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a;
    int sum =0;
    while(cin>>a){
        for(int i=1;i<=a;i++){
            if(i%2 == 0 && i%3 == 0 && i%12 != 0){
                sum+=i;
            }  
        }  
        cout << sum << endl;  
        sum = 0;  
    }    
}
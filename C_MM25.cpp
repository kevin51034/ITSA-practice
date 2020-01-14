#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a;
    int sum = 0;  
    while(cin>>a){
        for(int i=1;i<=a;i++){
            if(i%3 == 0){
                sum+=i;
            }
        }
        cout << sum << endl;
        sum = 0;
    }  
}
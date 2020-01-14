#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a;
    int sum =0;
    while(cin>>a){
        for(int i=1;i<=a;i++){
                sum+=i; 
        }
        for(int j=1;j<=a;j++){
            if(j==1){
                cout << '1';
            }
            else{
                cout << " + " << j;
            }
        }
        cout << " = " << sum << endl;
        sum=0; 
    }    
}
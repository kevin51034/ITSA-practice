#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a;
    int flag = 0;
    while(cin>>a){
        for(int i=1;i<=a;i++){
            if(a%i ==0){
                flag++;
            }
        }  
            if(flag >2){  
                cout << "NO" <<endl;
            }  
            else{
                cout << "YES" << endl;
            }
        flag = 0;
    }
}
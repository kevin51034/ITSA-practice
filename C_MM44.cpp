#include <iostream>
#include <iomanip>
#include <cmath>
#include<string>  

using namespace std;

int main(){
    string a,b;  
    while(cin>>a>>b){
        int count = 0;
        for(int i=0;i<b.length();i++){
            int check = 0;
            // check if exist
            for(int j=0;j<a.length();j++){
                if(b[i+j] == a[j] && i+j<b.length()){
                    check++;
                }
                // fail
                else{
                    break;  
                }
            }
            if(check == a.length()){
                count++;
            }
        }
        cout << count << endl;
    }
}
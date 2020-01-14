#include <iostream>
#include <iomanip>
#include <cmath>  
using namespace std;

int main(){
    int a,b,c;  
    while(cin>>a>>b>>c){
        if(a>b){
            if(b>c){
                if(b+c > a){
                    cout << "fit" << endl;
                }
                else{
                    cout << "unfit" << endl;
                }
            }
            else{
                if(a>c){
                    if(b+c>a){
                        cout << "fit" << endl;
                    }
                    else{
                        cout << "unfit" << endl;
                    }
                }
                else{
                    if(a+b>c){
                        cout << "fit" << endl;
                    }
                    else{
                        cout << "unfit" << endl;
                    }
                }
            }
        }
        else{
            if(a>c){
                if(a+c>b){
                    cout << "fit" << endl;
                }
                else{
                    cout << "unfit" << endl;
                }
            }
            else{
                if(b>c){
                    if(a+c > b){
                        cout << "fit" << endl;
                    }
                    else{
                        cout << "unfit" << endl;
                    }
                }
                else{
                    if(a+b>c){
                        cout << "fit" << endl;
                    }
                    else{
                        cout << "unfit" << endl;
                    }
                }
            }
        }
    }
}
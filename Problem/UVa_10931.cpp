#include <iostream>

using namespace std;

int main(){
    int i;
    while( cin >> i && i){
        int ans = 0;
        string b = "";
        while( i > 0 ){
            if (i % 2){
                b = '1' + b;
                ++ ans;
            }
            else b = '0' + b;
            i /= 2;
        }
        cout << "The parity of " << b << " is " << ans << " (mod 2).\n"; 
    }
}
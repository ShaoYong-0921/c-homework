#include <iostream>

using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a%b);
}

int main(){
    int n;
    while(cin >> n && n){
        int g = 0;
        for(int i=1; i<n; ++i){
            for(int j=i+1; j<=n; ++j){
                // cout << gcd(i, j) << endl;
                g += gcd(i, j);
            }
        }
        cout << g << '\n';
    }
}
#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int cof[1000005];

long long p(long long n, long long e){
    int num = 1;
    if ( e <= 0 ) return num;
    for (int i=0; i<e; ++i){
        num *= n;
    }
    return num;
}

int main(){
    long long x;
    string s;
    while( cin >> x ){
        getline(cin, s);
        getline(cin, s);
        memset(cof, 0, sizeof(cof));
        // cout << s << endl;

        stringstream ss(s);
        long long n = 0, exp = 0;
        while(ss >> n){
            cof[exp] = n;
            exp ++;
            // cout << "n = " << n << endl;
        }

        long long ans = 0;
        for(int i=0; i<exp-1; ++i){
            // cout << "cof = " << cof[i]  << " | " << exp - 1 - i << endl;
            // ans += cof[i] * (exp - 1 - i) * ( p(x, exp - 2 - i) );
            ans = ans * x + cof[i] * (exp - 1 - i);
            // cout << "weight = " << cof[i] * (exp - 1 - i) * ( pow(x, exp - 2 - i) ) << endl;
            // ans += cof[exp - 1 - i] 
        }
        cout << ans << endl;

    }
}
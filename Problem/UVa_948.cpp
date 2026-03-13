#include <iostream>
#include <algorithm>

using namespace std;

int fib[100];

int main(){
    int idx = 2, n = 0;
    fib[0] = 1;
    fib[1] = 2;
    while(n < 100000000){
        n = fib[idx - 1] + fib[idx - 2];
        fib[idx ++] = n;
    }
    // cout << "n = " << n << " idx = " << idx << endl;

    int c;
    while(cin >> c){
        while( c -- ){
            int num;
            cin >> num;
            if (!num){
                cout << "0 = 0 (fib)\n";
                continue;
            }
            
            string s = "";
            auto it = lower_bound(fib, fib+idx, num);
            int k = it - fib;
            // cout << "k = " << k << endl;
            int dec = num;
            for(int i=k; i>=0; --i){
                // if(dec > fib[i]){
                if (dec / fib[i]) s += '1';
                else if()
                else s += '0';
                dec %= fib[i];
                // }
            }
            // cout << s << endl;
            cout << num << " " << s << " (fib)\n";
        }
    }

}
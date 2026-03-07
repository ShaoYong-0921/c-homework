#include <iostream>

using namespace std;

int cnt;

void f(int n){
    // cout << n << " ";
    if (n == 1) return;
    if (n % 2 == 1) n = 3*n + 1;
    else n /= 2;
    ++ cnt;
    f(n);
}

int main(){
    int i, j;
    while( cin >> i >> j){
        cout << i << " " << j << " ";
        if (i > j) swap(i, j);
        int max = 0;
        for(int k=i; k<=j; ++k){
            cnt = 1;
            f(k);
            if (cnt > max) max = cnt;
        }
        cout << max << endl;
    }
}
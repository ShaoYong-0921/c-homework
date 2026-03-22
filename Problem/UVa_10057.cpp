#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int a[1000005];

int main(){
    int n;
    while(cin >> n){
        for(int i=0; i<n; ++i) cin >> a[i];
        sort(a, a+n);

        int num = 0, min1 = 0, min2 = 0, dif = 0; 
        if (n % 2 == 1) min1 = min2 = a[n/2];
        else min1 = a[n/2-1], min2 = a[n/2];
        for(int i=0; i<n; ++i){
            if (a[i] == min1 || a[i] == min2){
                ++ num;
            }
        }
        for(int i=min1; i<=min2; ++i) ++ dif;

        cout << min1 << " " << num << " " << dif << '\n';
    }
}
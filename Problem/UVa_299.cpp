#include <iostream>

using namespace std;

int a[100];

int main(){
    int n;
    cin >> n;
    while(cin >> n){
        for(int i=0; i<n; ++i) cin >> a[i];
        
        int ans = 0;
        for(int i=0; i<n-1; ++i){
            for(int j=0; j<n-1-i; ++j){
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    ++ ans;
                }
            }
        }
        cout << "Optimal train swapping takes " << ans << " swaps.\n";
    }
}
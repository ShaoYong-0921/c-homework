#include <iostream>
#include <algorithm>

using namespace std;

int r[1000];

int main(){
    int c;
    cin >> c;
    while(c --){
        int n;
        cin >> n;
        for( int i=0; i<n; ++i ){
            cin >> r[i];
        }
        sort(r, r + n);
        int ans = 0;
        for(int i=0; i<n; ++i){
            // printf("r[%d] = %d\n", i, r[i]);
            ans += abs(r[i] - r[n/2]);
        }
        cout << ans << endl;
    }
}
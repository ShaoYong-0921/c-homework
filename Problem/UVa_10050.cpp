#include <iostream>
#include <cstring>

using namespace std;

bool d[5000];

int main(){
    int t, n, p ,i ,j, k;
    cin >> t;
    while( t -- ){
        memset(d, 0, sizeof(d));
        cin >> n;
        cin >> p;
        for(i=0; i<p; ++i){
            cin >> j;
            for(k=j-1; k<n; k+=j){
                // cout << "k = " << k << endl;
                d[k] = true;
            }
        }
        for(i=0; i<n; i++){
            if (i % 7 == 5) d[i] = false;
            if (i % 7 == 6) d[i] = false;
            // cout << i + 5 << " | " << i + 6 << endl;
            
        }
        int ans = 0;
        for(i=0; i<n; ++i){
            if(d[i]) ++ ans;
        }
        // cout << "ans = " << ans << endl;
        cout << ans << endl;
    }
}
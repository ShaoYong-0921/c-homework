#include <iostream>
#include <cstring>

using namespace std;

int num[10000];
bool b[30000];

int main(){
    ios::sync_with_stdio(false);
    int n;
    int cnt = 0;
    // bool first = true;
    while(cin >> n){
        // if (!first) cout << '\n';
        // first = false;
        memset(b, 0, sizeof(b));
        bool isB2 = true;

        for(int i=0; i<n; i++){
            cin >> num[i];
            if (num[i] < 1) isB2 = false;
        }
        for(int i=0; i<n-1; ++i){
            if (num[i] >= num[i+1]) isB2 = false;
        }
        
        for(int i=0; i<n; ++i){
            if (!isB2) break;
            for (int j=i; j<n; ++j){
                int s = num[i] + num[j];
                if (num[i] <= 0) {
                    isB2 = false;
                    break;
                }
                // cout << "s = " << s << endl;
                if (b[s]){
                    isB2 = false;
                    break;
                }
                else {
                    b[s] = true;
                }
            }
        }

        if (isB2) cout << "Case #" << ++cnt << ": It is a B2-Sequence.\n";
        else cout << "Case #" << ++cnt << ": It is not a B2-Sequence.\n";
        cout << '\n';
    }
}
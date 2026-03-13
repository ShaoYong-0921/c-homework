#include <iostream>
#include <cstring>

using namespace std;

int b[200];
bool used[100000];

int main(){
    int n, c = 0;
    bool first = true;
    while(cin >> n){
        // if (!first) cout << '\n';
        // first = false;
        memset(used, 0, sizeof(used));
        
        for(int i=0; i<n; ++i) {
            cin >> b[i];
        }
        bool b2 = true;
        for(int i=0; i<n-1; ++i){
            if (b[i] > b[i + 1]) b2 = false;
        }
        for(int i=0; i<n; ++i){
            for(int j=i; j<n; ++j){
                int d = b[i] + b[j];
                if (d <= 0){
                    b2 = false;
                    break;
                }
                // cout << "d = " << d << endl;
                if (used[d]) b2 = false;
                else used[d] = true;
            }
        }
        if (b2) cout << "Case #" << ++c << ": It is a B2-Sequence.\n";
        else cout << "Case #" << ++c << ": It is not a B2-Sequence.\n";
        cout << endl;
    }
    
}
#include <iostream>
#include <cstring>

using namespace std;

long long a[300][300];

int main(){
    memset(a, 0, sizeof(a));
    long long t, c = 0;
    string s;
    cin >> t;
    while( t -- ){
        getline(cin, s);
        getline(cin , s);
        // cout << s << endl;
        int dim = 0;
        for(int i=4; i<s.size(); ++i){
            if ('0' <= s[i] && s[i] <= '9') dim = dim *10 + (s[i] - '0');
        }
        int n = dim;
        // cout << "n = " << n << endl;
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                cin >> a[i][j];
            }
        }
        
        bool sym = true;        
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                if (a[i][j] != a[n-1-i][n-1-j]) sym = false;
                if (a[i][j] < 0) sym = false;
                // cout << a[i][j] << " ";
                // cout << a[n - 1 - i][n - 1 - j] << endl;
            } 
        }
        if (sym) cout << "Test #" << ++c << ": Symmetric.\n";
        else cout << "Test #" << ++c << ": Non-symmetric.\n";
        // cout << endl;
        
    }
}
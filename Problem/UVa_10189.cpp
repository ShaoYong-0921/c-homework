#include <iostream>
#include <cstring>

using namespace std;

char a[105][105];
char ans[105][105];
bool mine[105][105];

int main(){
    int n, m, cnt = 0;
    bool first = true;
    while(cin >> n >> m){
        if (!n && !m) break;
        if (!first) cout << '\n';
        first = false;

        memset(a, '0', sizeof(a));
        memset(ans, '0', sizeof(ans));
        memset(mine, false, sizeof(mine));
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                cin >> a[i][j];
                if (a[i][j] == '*'){
                    mine[i][j] = true;
                    if (i - 1 >= 0 ) ans[i-1][j] += 1;
                    if (j - 1 >= 0 ) ans[i][j-1] += 1;
                    if (i + 1 < n ) ans[i+1][j] += 1;
                    if (j + 1 < m ) ans[i][j+1] += 1;
                    if (i - 1 >= 0  && j - 1 >= 0) ans[i-1][j-1] += 1;
                    if (i + 1 < n  && j - 1 >= 0) ans[i+1][j-1] += 1;
                    if (i - 1 >= 0  && j + 1 < m) ans[i-1][j+1] += 1;
                    if (i + 1 < n  && j + 1 < m) ans[i+1][j+1] += 1;
                }
            }
        }
        cout << "Field #" << ++ cnt << ":\n";
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if (mine[i][j]) cout << '*';
                else cout << (char)ans[i][j];
            }
            cout << '\n';
        }
    }
}
#include <iostream>

using namespace std;

char grid[100][100];

int main(){
    int t, m, n, q;
    cin >> t;
    while( t -- ){
        cin >> m >> n >> q;
        cout << m << " " << n << " " << q << '\n';
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                cin >> grid[i][j];
            }
        }

        int r, c;
        while( q -- ){
            cin >> r >> c;
            // cout << r << " " << c;
            char center = grid[r][c];
            int squ = 0;
            while(1){
                if (r - squ < 0 || c - squ < 0 || r + squ >= m || c + squ >= n)  break;
                bool stop = false;
                for(int i=r-squ; i<=r+squ; ++i){
                    for(int j=c-squ; j<=c+squ; ++j){
                        // cout << "i:" << i << " | j = " << j << endl;
                        if(grid[i][j] != center) stop = true;
                    }
                }
                if (stop) break;
                else ++ squ;
                // break;
            }
            cout << 2 * squ - 1 << endl;
        }
    }
}
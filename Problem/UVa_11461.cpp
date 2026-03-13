#include <iostream>
#include <cstring>

using namespace std;

bool square[100000];

int main(){
    int a, b, i = 0, idx = 0;
    memset(square, 0, sizeof(square));
    while(1){
        ++ i;
        if (i * i > 100000) break;
        square[i * i] = true; 
    }
    while( cin >> a >> b) {
        if (a == 0 && b == 0) break;
        int ans = 0;
        for(int i=a; i<=b; ++i){
            if (square[i]) ++ ans;
        }
        cout << ans << endl;
    }
}
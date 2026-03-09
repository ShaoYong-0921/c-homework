#include <iostream>
#include <cstring>

using namespace std;

int num[5000];
bool jol[5000];

int main(){
    int n;
    while( cin >> n ){
        memset(jol, false, sizeof(jol));
        bool jolly = true;
        // if (n == 1) jolly = false;
        for(int i=0; i<n; ++i){
            cin >> num[i];
            // if(num[i] <= 0 ) jolly = false;
        }
        for(int i=0; i<n-1; ++i){
            jol[abs(num[i] - num[i+1])] = true;
            // cout << abs(num[i] - num[i+1]) << " ";
        }

        for(int i=1; i<n; ++i){
            if (!jol[i]) jolly = false;
        }
        if (jolly) cout << "Jolly";
        else cout << "Not jolly";
        cout << endl;
    }
}
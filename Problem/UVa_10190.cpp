#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m, n;
    while(cin >> n >> m){
        if (!m || !n){
            cout << "Boring!\n";
            continue;
        }
        vector<int> v(1, n);
        int idx = 0;

        bool f = true;
        if (v[idx] % m != 0) f = false;
        while(v[idx] % m == 0){
            int k = v[idx] / m;
            if (k >= v[idx]){
                f = false;
                break;
            } 
            // cout << "n = " << v[idx] << endl;
            v.push_back(k);
            ++ idx;
        }

        bool first = true;
        if (v[idx] != 1 || !f) cout << "Boring!";
        else{
            for(auto i : v) {
                if (!first) cout << " ";
                cout << i;
                first = false;
            }
        }
        cout << '\n';
        
    }

}
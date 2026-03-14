#include <iostream>
#include <map>
#include <cstring>
#include <climits>

using namespace std;

string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int base[50];

int main(){
    bool first = true;
    int c, cnt = 0;
    cin >> c;
    while( c -- ){
        if (!first) cout << '\n';
        first = false;
        cout << "Case " << ++cnt << ":\n";
        map<int, int> mp;
        for(int i=0; i<s.size(); ++i){
            cin >> mp[i];
        }
        int n;
        cin >> n;
        while(n --){
            memset(base, 0, sizeof(base));
            int num, min = INT_MAX;
            cin >> num;
            for(int i=2; i<=s.size(); ++i){
                int k = num, sum = 0;
                if (k == 0) sum += mp[k];
                while(k > 0){
                    sum += mp[k % i];
                    k /= i;
                }
                base[i] = sum;
                min = (sum < min) ? sum : min;
                // cout << "base: " << i << " | sum = " << sum << "min : "<< min << endl;
            }
            cout << "Cheapest base(s) for number " << num << ":";
            for(int i=2; i<=s.size(); ++i){
                // cout << base[i] << " ";
                if (base[i] == min) cout << " " << i ;
                // cout << "#";
            }
            cout <<'\n';
        }
    }
    
    
}
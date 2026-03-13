#include <iostream>
#include <map>

using namespace std;

string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

int main(){
    map<char, int> mp;
    for(int i=0; i<s.size(); ++i){
        mp[s[i]] = i;
    }
    string num;
    while(cin >> num){
        bool sol = true;
        int max = 0;
        for(int i=0; i<num.size(); ++i){
            if (mp[num[i]]) max = mp[num[i]] + 1 > max ? mp[num[i]] + 1: max;
        }
        // if (max > 1) cout << "max = " << max << endl;
        if (max < 2) max = 2;

        long long ans = 0, sum = 0;
        for(int i=max; i<63; ++i){
            sum = 0;
            for(int j=0; j<num.size(); ++j){
                if(mp[num[j]]) sum += mp[num[j]];
            }
            // cout << "sum = " << sum << " | i = " << i << endl;
            if (sum % (i - 1) == 0) {
                // cout << sum << endl;
                ans = i;
                break;
            }
        }
        if (ans) cout << ans << '\n';
        else cout << "such number is impossible!\n";
    }
    // cout << s.size() <<endl;
}
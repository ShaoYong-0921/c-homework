#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

string s = "cdefgabCDEFGAB";

int ans[15];
bool state[15], nxt[15];

vector<int> press(char c){
    // cout << "in " << char(c) << endl;
    vector<int> v;
    switch(c){
        case 'c': v = {2, 3, 4, 7, 8, 9, 10}; break;
        case 'd': v = {2, 3, 4, 7, 8, 9}; break;
        case 'e': v = {2, 3, 4, 7, 8}; break;
        case 'f': v = {2, 3, 4, 7}; break;
        case 'g': v = {2, 3, 4}; break;
        case 'a': v = {2, 3}; break;
        case 'b': v = {2}; break;
        case 'C': v = {3}; break;
        case 'D': v = {1, 2, 3, 4, 7, 8, 9}; break;
        case 'E': v = {1, 2, 3, 4, 7,8}; break;
        case 'F': v = {1, 2, 3, 4, 7}; break;
        case 'G': v = {1, 2, 3, 4}; break;
        case 'A': v = {1, 2, 3}; break;
        case 'B': v = {1, 2}; break;
        default : break;
    }
    return v;
}

int main(){
    int n;
    string str;
    cin >> n;
    getline(cin, str);
    while( n -- ){
        string s;
        getline(cin, s);
        memset(state, false, sizeof(state));
        memset(ans, 0, sizeof(ans));
        for(int i=0; i<s.size(); ++ i){
            memset(nxt, false, sizeof(nxt));
            vector<int> v = press(s[i]);
            for(auto i : v) nxt[i] = true;
            for(int i=1; i<=10; ++i){
                if (nxt[i] && !state[i]){
                    ans[i] ++;
                }
                state[i] = nxt[i];
            }
            // cout << endl;
        }
        bool first = true;
        for(int i=1; i<=10; ++i) {
            if (!first) cout << " ";
            first = false;
            cout << ans[i];
        }
        cout << '\n';
    }
}
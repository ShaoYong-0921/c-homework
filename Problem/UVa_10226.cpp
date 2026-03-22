#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main(){
    int n;
    double sum = 0;
    string s;
    cin >> n;

    getline(cin, s);
    getline(cin, s);
    bool first = true;
    
    while(n --){
        if (!first) cout << '\n';
        first = false;
        map<string, int> mp;
        while(getline(cin, s)){
            if (s == "") break;
            if (mp[s]) mp[s] ++;
            else mp[s] = 1;
            ++ sum;
        }
        // cout << "sum :" << sum << endl;
        cout << fixed << setprecision(4);
        for(auto i : mp) cout << i.first << " " << (i.second / sum) * 100 << endl;
        sum = 0;
    }
}
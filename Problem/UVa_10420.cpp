#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

string contries[3000];

int main(){
    int n;
    int idx = 0;
    string s;
    map<string , int> m;
    cin >> n;
    getline(cin, s);

    while( n -- ){
        // memset(contries, ' ', sizeof(contries));
        cin >> s;
        string contry = "";
        
        for(int i=0; i<s.size(); ++i){
            if (s[i] == ' ') break;
            contry += s[i];
        }
        // cout << "contry = " << contry << endl;
        
        if (m[contry]) m[contry] ++;
        
        else {
            m[contry] = 1;
            contries[idx++] = contry;
        }
        
        getline(cin, s);

    }
    sort(contries, contries + idx);
    for(int i=0; i<idx; ++i){
        cout << contries[i] << " " << m[contries[i]] << endl;
    }
}
#include <iostream>
#include <cstring>

using namespace std;

int a[250];

int main(){
    int n;
    string s;
    cin >> n;
    getline(cin, s);
    memset(a, 0, sizeof(a));
    while( n -- ) {
        getline(cin, s);
        // cout << s << endl;
        for(int i=0; i<s.size(); ++i ){
            if ( 'a' <= s[i] && s[i] <= 'z'){
                s[i] -= 'a' - 'A';
            }
            if ( 'A' <= s[i] && s[i] <= 'Z'){
                // cout << s[i] << " ";
                a[s[i]] ++;
            }
        }
    }
    int max = 0;
    for(int i='A'; i<='Z'; ++i ){
        if (a[i] > max) max = a[i];
    }
    for(int i=max; i>0; --i){
        for(int j='A'; j<='Z'; ++j ){
            if (a[j] == i){
                cout << (char)j << " " << i << endl;
            }
        }
    }
}
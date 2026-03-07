#include <iostream>

using namespace std;

string s = "qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

char find(char c){
    if (c == ' ') return ' ';
    for(int i=0; i<s.size(); ++i){
        if (s[i] == c) return s[i - 2];
    }
    return '#';
}

int main(){
    string d;
    while(getline(cin, d)){
        for(int i=0; i<d.size(); ++i){
            // if (d[i] == ' ') cout << " ";
            if ('A' <= d[i] && d[i] <= 'Z'){
                d[i] += 'a' - 'A';
            }
            cout << find(d[i]);
        }
    }
    cout << endl;
}
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int a1[200], a2[200];

int main(){
    string s1, s2;
    while( getline(cin, s1)){
        getline(cin, s2);
        // cout << s1 << " | " << s2 << endl;
        memset(a1, 0, sizeof(a1));
        memset(a2, 0, sizeof(a2));

        for (int i=0; i<s1.size(); ++i) a1[s1[i]] ++;
        for (int i=0; i<s2.size(); ++i) a2[s2[i]] ++;

        for (int i='a'; i<='z'; ++i){
            if (a1[i] > 0 && a2[i] > 0){
                int n = min(a1[i], a2[i]);
                while( n -- ) cout << (char)i;
            } 
        }
        cout << endl;
    }
}
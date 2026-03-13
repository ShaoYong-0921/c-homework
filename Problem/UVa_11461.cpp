#include <iostream>
#include <cstring>

using namespace std;

bool s[100005];

int main(){
    int a, b;
    memset(s, 0, sizeof(s));
    for(int i=1; i*i<100005; ++i){
        s[i*i] = true;
    }
    while(cin >> a >> b){
        if (!a && !b) break;
        int sum = 0;
        for(int i=a; i<=b; ++i){
            if (s[i]) ++sum;
        }
        cout << sum << '\n';
    }
}
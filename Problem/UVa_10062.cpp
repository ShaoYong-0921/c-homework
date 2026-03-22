#include <iostream>
#include <cstring>

using namespace std;

int sum[256];

int main(){
    string s;
    bool first = true;
    while(getline(cin, s)){
        memset(sum, 0, sizeof(sum));
        if (!first) cout << '\n';
        first = false;
        for(int i=0; i<s.size(); ++i){
            sum[s[i]] ++;
        }
        for(int i=1; i<1005; i++){
            for(int j=129; j>=0; --j)
                if (sum[j] == i) cout << j << " " << i << '\n';
        }
    }
}
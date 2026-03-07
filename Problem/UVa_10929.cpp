#include <iostream>

using namespace std;

int main(){
    int odd, even;
    string s;
    while(cin >> s && s != "0"){
        // cout << s << endl;
        odd = even = 0;
        for(int i=0; i<s.size(); ++i){
            if ( i % 2 == 0 ){
                even += s[i] - '0';
            }
            else odd += s[i] - '0';
        }
        // cout << "even = " << even << " odd = " << odd << endl;
        if ( abs(even - odd) % 11 == 0 ) cout << s << " is a multiple of 11.";
        else cout << s << " is not a multiple of 11.";
        cout << endl;
    }
}
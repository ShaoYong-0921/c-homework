#include <iostream>

using namespace std;

int main(){
    string s;
    while(cin >> s && s != "0"){
        int deg = 1;
        long long n = 0;
        for(int i=0; i<s.size(); ++i){
            n += (s[i] - '0');
        }
        while( n > 9 ){
            int sum = 0;
            ++ deg;
            while(n > 0){
                sum += n % 10;
                n /= 10;
            }
            // cout << "sum = " << sum << endl;
            n = sum;
        }
        if (n == 9) cout << s << " is a multiple of 9 and has 9-degree " << deg << ".\n";
        else cout << s << " is not a multiple of 9.\n";
    }
}
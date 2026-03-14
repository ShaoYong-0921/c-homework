#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    int n, cnt = 0;
    string s1, s2;
    cin >> n;
    while( n-- ){
        cout << "Pair #" << ++ cnt << ": "; 
        cin >> s1 >> s2;
        int n1 = 0, n2 = 0;
        for(int i=0; i<s1.size(); ++i){
            n1 = n1 * 2 + (s1[i] - '0');
        }
        
        for(int i=0; i<s2.size(); ++i){
            n2 = n2 * 2 + (s2[i] - '0');
        }

        int g = gcd(n1, n2);
        if ( g == 1 ) cout << "Love is not all you need!\n";
        else cout << "All you need is love!\n";
        // cout << n1 << " " << n2 << endl;
    }
}
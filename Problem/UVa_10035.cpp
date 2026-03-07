#include <iostream>

using namespace std;

int main(){
    string s1, s2;
    while( cin >> s1 >> s2 && (s1 != "0" || s2 != "0")){
        
        if (s1.size() < s2.size()) swap(s1, s2);
        // cout << "s1 :" << s1.size() << " s2 :" << s2.size() << " || " << s1.size() - s2.size() << endl;
        int n1 = s1.size(), n2 = s2.size();
        for(int i=0; i<n1 - n2; ++i){
            s2 = '0' + s2;
        } 
        // cout << "s2 = " << s2 << endl;

        int n = (s1.size() > s2.size() ? s1.size() : s2.size());

        int carry = 0, ans = 0;
        for(int i=0; i<n; ++i){
            int d1 = s1[n - 1 - i] - '0';
            int d2 = s2[n - 1 - i] - '0';
            if (d1 + d2 + carry > 9){
                carry = 1;
                ++ ans;
            }
            else carry = 0;
        }
        // cout << "ans = " << ans << endl;
        if (ans == 1 )  cout << ans << " carry operation.";
        else if (ans) cout << ans << " carry operations.";
        else cout << "No carry operation.";
        cout << endl;
    }
}
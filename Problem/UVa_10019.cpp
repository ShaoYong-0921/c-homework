#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n --){
        int m;
        cin >> m;

        int k = m;
        // string b1 = k == 0 ? "0" : "";
        int b1 = 0;
        while(k > 0){
            if (k % 2) ++ b1;
            // if (k % 2) b1 = '1' + b1;
            // else b1 = '0' + b1;
            k /= 2;
        }
        // cout << "b1 = " << b1 << endl;
        cout << b1 << " ";
        
        int sum = 0;
        k = m;
        while(k > 0){
            sum = sum * 16 + k % 10;
            k /= 10;
        }
        // cout << "sum = " << sum << endl;

        int b2 = 0;
        k = sum;
        while(k > 0){
            if (k % 2) ++ b2;
            k /= 2;
        }
        cout <<  b2 << '\n';
    }
}
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while( n-- ){
        long long sum, dif;
        cin >> sum >> dif;
        long long a, b;
        if ((sum + dif) % 2 != 0){
            cout << "impossible\n";
            continue;
        }
        a = (sum + dif) / 2;
        b = sum - a;
        if (a < b) swap(a, b);
        if (a < 0 || b < 0) cout << "impossible\n";
        else cout << a << " "<< b << endl;
    }
}
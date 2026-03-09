#include <iostream>

using namespace std;

int main(){
    int t, a, b, cnt = 0;
    
    cin >> t;
    while( t-- ){
        cin >> a >> b;
        cout << "Case " << ++cnt << ": ";
        int sum = 0;
        for (int i=a; i<=b; ++i){
            if( i % 2 == 1) sum += i;
        }
        cout << sum << endl;
    }
}
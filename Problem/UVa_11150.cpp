#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int sum = n, empty = n;
        while(empty >= 3 || (empty+1) % 3 == 0){
            bool borrow = false;
            if ((empty + 1) % 3 == 0){
                borrow = true;
                n = (empty + 1) / 3;
                sum += n;
                empty = n - 1;
            }
            else{
                n = empty / 3;
                sum += n;
                empty = n + empty % 3;
            }
        }
        cout << sum << endl;
    }
}
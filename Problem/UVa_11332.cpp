#include <iostream>

using namespace std;

int main(){
    long long n;
    while( cin >> n && n != 0){
        while( n > 9 ){
            int sum = 0;
            while( n > 0 ){
                sum += n % 10;
                n /= 10;
            }
            n = sum;
            // cout << "n = " << n << endl;
        }
        cout << n << endl;
    }
}
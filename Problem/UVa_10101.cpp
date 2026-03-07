#include <iostream>
#include <iomanip>

using namespace std;

void f(long long n){
    if (n >= 10000000){
        f(n /10000000);
        cout << " kuti";
        n %= 10000000;
    }
    if (n >= 100000){
        f(n /100000);
        cout << " lakh";
        n %= 100000;
    }
    if (n >= 1000){
        f(n /1000);
        cout << " hajar";
        n %= 1000;
    }
    if (n >= 100){
        f(n /100);
        cout << " shata";
        n %= 100;
    }
    if (n) cout << " " <<  n;
}

int main(){
    long long n, cnt = 0;
    while(cin >> n){
        cout << setw(4) << right << ++cnt << ".";
        if (n == 0) cout << " " << n;
        else f(n);
        cout << endl;
    }
}
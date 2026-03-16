#include <iostream>
#include <cstring>

using namespace std;

bool prime[20000000];

void create(){
    memset(prime, true, sizeof(prime));

    prime[0] = false;
    prime[1] = false;

    for(long long i=2; i<20000000; ++i){
        if(prime[i]){
            for(long long j=i*i; j<20000000; j+=i){
                prime[j] = false;
            }
        }
    }
    // for(int i=0; i<100; ++i)
    //     if (prime[i])
    //         cout << i << " ";
}

int main(){
    create();
    int n;
    while(cin >> n){
        bool f;
        if(!prime[n]){
            cout << n << " is not prime.\n";
            continue;
        }
        int n2 = 0, num = n;
        while(num > 0){
            int d = num % 10;
            n2 = n2 * 10 + d;
            num /= 10;
        }
        // cout << "n2 = " << n2 << endl;
        if (prime[n] && prime[n2] && n != n2)
            cout << n << " is emirp.\n";
        else
            cout << n << " is prime.\n";
    }


}
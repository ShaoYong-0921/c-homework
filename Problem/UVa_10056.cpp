#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int s, n;
    double d;
    cin >> s;
    while(s --){
        int w;
        cin >> n >> d >> w;
        // ans = (p) + (1 - p) * p + p + (1 - p) * p
        cout << setprecision(4);
        cout << (pow((1 - d), w - 1) * d) / ( 1 - pow((1 - d ), n)) << endl;
        

    }
}
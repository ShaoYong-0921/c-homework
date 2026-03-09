#include <iostream>

using namespace std;

int md[12] = {21, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
int doom = 10;
string week[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main(){
    int n;
    cin >> n;
    while( n -- ) {
        int m , d;
        cin >> m >> d;
        
        int sum_d = 0;
        if (m == 1){
            d += 28;
            sum_d = abs( d - doom );
        }
        else {
            for(int i=0; i<m-1; ++i){
                sum_d += md[i];
            }
            sum_d += d;
        }
        cout << week[sum_d % 7] << endl;
        // cout << " sum_d = " << sum_d  << endl;

    }
}
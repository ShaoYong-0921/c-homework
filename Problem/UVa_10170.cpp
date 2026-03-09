#include <iostream>

using namespace std;

int main(){
    long long s, d;
    while ( cin >> s >> d ){
        long long date = 0, gup = s;
        while( date + gup < d ){
            date += gup;
            ++ gup;
            // cout << "date = " << date << " ";
        }
        // cout << " | " <<  gup << endl;
        cout << gup << endl;
    }

}
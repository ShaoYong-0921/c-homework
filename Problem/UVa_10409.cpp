#include <iostream>

using namespace std;

// 1 top 2 north 3 west 

int main(){
    int n;
    while(cin >> n && n){
        int top = 1, north = 2, west = 3;
        while( n -- ){
            string s;
            cin >> s;
            int tmp = top;
            if (s == "north"){
                top = 7 - north;
                north = tmp;
            }
            else if (s == "south"){
                top = north;
                north = 7 - tmp;
            }
            else if (s == "east"){
                top = west;
                west = 7 - tmp;
            }
            else if (s == "west"){
                top = 7 - west;
                west = tmp;
            }
        }
        cout << top << endl;
    }
}
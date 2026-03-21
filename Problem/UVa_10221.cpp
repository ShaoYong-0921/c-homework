#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double s, a;
    string d;
    // cout << acos(-1) << endl;
    while( cin >> s >> a >> d ){
        if (d == "min") a /= 60.0;
        while (a > 360.0) a -= 360.0;
        a = a > 180 ? 360 - a : a;
        double pi = acos(-1);
        double len = ( 6440 + s ) * 2 * pi * (a / 360);
        double chord = 2 * ( 6440 + s ) * sin(a / 180 / 2 * pi );
        cout << fixed << setprecision(6) << len << " " << chord<< endl;
    }
}
#include <iostream>
#include <cstring>

using namespace std;

enum orient{N, E, S, W};

bool scent[100][100];

orient getd(char c){
    if (c == 'E') return E;
    if (c == 'W') return W;
    if (c == 'S') return S;
    return N;
}

string print(orient d){
    if (d == E) return "E";
    if (d == W) return "W";
    if (d == S) return "S";
    if (d == N) return "N";
    return "";
}

int main(){
    int n, m, x, y;
    char c;
    cin >> n >> m;

    memset(scent, false, sizeof(scent));
    while( cin >> x >> y >> c){
        string s;
        getline(cin, s);
        getline(cin, s);
        
        orient d = getd(c);
        bool fall = false;
        for(int i=0; i<s.size(); ++i){
            int last_x = x, last_y = y;
            orient last_d = d;

            if (s[i] == 'L'){
                d = (orient)((d + 3) % 4);
            }
            if (s[i] == 'R'){
                d = (orient)((d + 1) % 4);
            }
            if (s[i] == 'F'){
                if (d == N) ++ y;
                if (d == S) -- y;
                if (d == E) ++ x;
                if (d == W) -- x;
            }

            if (x < 0 || x > n || y < 0 || y > m){
                if (scent[last_x][last_y]){
                    x = last_x;
                    y = last_y;
                    d = last_d;
                    continue;
                } 
                else{
                    scent[last_x][last_y] = true;
                } 
                cout << last_x << " " << last_y << " " << print(d) << " LOST\n";
                fall = true;
                break;
            }
            // cout << print(d) << " ";
        }
        // cout << endl;
        if (!fall) cout << x << " " << y << " " << print(d) << '\n';

    }
}
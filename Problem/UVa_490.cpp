#include <iostream>
#include <cstring>

using namespace std;

char c[200][200];

int main(){
    string s;
    int row = 0, col = 0;
    memset(c, ' ', sizeof(c));
    while(getline(cin, s)){
        if (s.size() > col) col = s.size();
        for(int i=0; i<s.size(); ++i){
            c[row][i] = s[i];
        }
        ++ row;
    }
    for(int i=0; i<col; ++i){
        for(int j=0; j<row; ++j){
            cout << c[row - 1 - j][i];
        }
        cout << endl;
    }
}


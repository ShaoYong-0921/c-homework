#include <iostream>

using namespace std;

int main(){
    string s;
    bool change = true;
    while(getline(cin, s)){
        for(int i=0; i<s.size(); ++i){
            if (s[i] == '"' && change){
                cout << "``";
                change = false;
            }
            else if (s[i] == '"' && !change){
                cout << "''";
                change = true;
            }
            else cout << s[i];
        }
        cout << endl;
    }
}
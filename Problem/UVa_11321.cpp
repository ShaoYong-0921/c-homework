#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
bool cmp(int a, int b){
    if (a % m != b % m) return a%m < b%m;
    if (abs(a)%2 == 1 && abs(b)%2 == 1) return a > b;
    else if (abs(a)%2 == 0 && abs(b)%2 == 0) return a < b;
    else return abs(a) % 2 == 1; 
}

int main(){
    // bool f = true;
    while(cin >> n >> m){
        // if (!f) cout << '\n';
        // f = false; 
        cout << n << " "<< m << '\n';
        if (!n && !m) break;
        // vector< vector <int> > mod;
        vector<int> nums;
        for(int i=0; i<n; ++i){
            int k;
            cin >> k;
            nums.push_back(k);
        }
        sort(nums.begin(), nums.end(), cmp);
        // bool first = true;
        for(auto i : nums) {
            // if (!first) cout << " ";
            // first = false;
            cout << i << '\n';
        }

    }
}
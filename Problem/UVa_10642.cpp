#include <iostream>

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    while(n --){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int layer1 = x1 + y1;
        int layer2 = x2 + y2;
        int sum = 0;
        for(int i = layer1+1; i <layer2+1; ++i){
            sum += i;
        }
        sum = sum + x2 - x1;
        cout << "Case " << ++ cnt << ": "<< sum << '\n';
    }
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int main() {
    cin >> n;
    vector<int> v(n);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if(i%2!=0){
            sort(v.begin(), v.end());
            cout << v[i/2-1] << " ";
        }
    }

    return 0;
}
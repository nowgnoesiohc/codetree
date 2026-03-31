#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int main() {
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if(i%2 != 0){
            sort(v.begin()+1, v.begin()+i+1);
            cout << v[i/2+1] << " ";
        }
    }

    return 0;
}
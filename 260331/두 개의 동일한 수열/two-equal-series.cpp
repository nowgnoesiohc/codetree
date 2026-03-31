#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

int main() {
    cin >> n;
    vector<int> A(n);
    vector<int> B(n); 

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    if(A==B) cout << "Yes";
    else cout << "No";

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int arr[101];

    cin >> n;
    for( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }

    for( int i = 0; i < n; i ++ ){
        cout << pow(arr[i],2) << ' ';
    }

    return 0;
}
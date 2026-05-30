#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10][10];
    cin >> n;
    
    for ( int i = 0; i < n; i ++ ) {
        int cnt = 1;
        if ( i % 2 ) for ( int j = n-1; j >= 0; j-- ) arr[i][j] = cnt++;
        else for ( int j = 0; j < n; j ++ ) arr[i][j] = cnt++;
    }


    for( int i = 0; i < n; i ++ ) {
        for ( int j = 0; j < n; j ++ ) {
            cout << arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}
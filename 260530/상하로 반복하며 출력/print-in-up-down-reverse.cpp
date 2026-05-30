#include <iostream>
using namespace std;

int main() {
    int N, arr[10][10];
    cin >> N;
    for( int i = 0; i < N; i ++ ) {
        int cnt = 1;
        if( i % 2 ) for ( int j = N-1; j >= 0; j-- ) arr[j][i] = cnt++;
        else for ( int j = 0; j < N; j++ ) arr[j][i] = cnt ++;
    }

    for( int i = 0; i < N; i++ ) {
        for( int j = 0; j < N; j++ ) {
            cout << arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}
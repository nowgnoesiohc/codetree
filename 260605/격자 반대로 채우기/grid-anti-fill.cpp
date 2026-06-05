#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0, arr[10][10];
    cin >> N;

    for (int j = N - 1; j >= 0; j--) {
        if ((N - 1 - j) % 2 == 0) {
            for (int i = N - 1; i >= 0; i--) {
                arr[i][j] = ++cnt;
            }
        } else {
            for (int i = 0; i < N; i++) {
                arr[i][j] = ++cnt;
            }
        }
    }

    for( int i = 0; i < N; i++ ) {
        for ( int j = 0; j < N; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
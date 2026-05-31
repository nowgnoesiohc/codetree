#include <iostream>

using namespace std;

int main() {
    int tmp, arr[3][3];

    for( int i = 0; i < 6; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            if( i < 3 ) arr[i][j] = 1;
            cin >> tmp;
            arr[i%3][j] *= tmp;

        }
    }

    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int N, M, tmp, arr[10][10];

    cin >> N >> M;
    for( int i = 0; i < N * 2; i++ ) {
        for( int j  = 0; j < M; j++ ) {
            if( i < N ) cin >> arr[i][j];
            else {
                cin >> tmp;
                cout << ( arr[i%N][j] == tmp ? 0 : 1 ) << ' ';
            }
        }
        if( i >= N ) cout << endl;
    }


    return 0;
}
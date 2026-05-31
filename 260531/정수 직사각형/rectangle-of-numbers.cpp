#include <iostream>
using namespace std;

int main() {
    int N, M;
    int arr[100][100] = {};
    cin >> N >> M;
    
    int num = 1;
    for( int i = 0; i < N; i++ ) {
        for ( int j = 0; j < M; j++ ) {
            arr[i][j] = num++;
        }
    }

    for ( int i = 0; i < N; i++ ) {
        for (int j = 0; j < M; j++ ){
            cout << arr[i][j] << ' ';
        }
        cout << endl;

    }

    return 0;
}
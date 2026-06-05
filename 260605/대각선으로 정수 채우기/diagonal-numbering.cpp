#include <iostream>
using namespace std;

int main() {
    int N, M, arr[100][100];

    int x = 0, y = 0;
    int startX = 0, startY = 0;
    int cnt = 1;

    cin >> N >> M;

    for (int i = 0; i < N * M; i++) {
        arr[x][y] = cnt++;

        if (x == N - 1 || y == 0) {

            if (startY < M - 1)
                startY++;
            else
                startX++;

            x = startX;
            y = startY;
        }
        else {
            x++;
            y--;
        }
    }

    for ( int i = 0; i < N; i++ ) {
        for ( int j = 0; j < M; j++ ) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
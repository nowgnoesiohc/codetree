#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[2][4];
    double row[2]={}, col[4]={}, avr = 0;

    for ( int i = 0; i < 2; i++ ) {
        for ( int j = 0; j < 4; j++ ) {
            cin >> arr[i][j];
        }
    }

    for( int i = 0; i < 2; i++ ) {
        for ( int j = 0; j < 4; j++ ){
            row[i] += arr[i][j];
            col[j] += arr[i][j];
            avr += arr[i][j];
        }
    }
    cout << fixed << setprecision(1);

    for ( int i = 0; i < 2; i++ ){
        cout << row[i] / 4 << ' ';
    } cout << endl;

    for ( int i = 0; i < 4; i++ ){
        cout << col[i] / 2 << ' ';
    } cout << endl;

    cout << avr/8;

    return 0;
}
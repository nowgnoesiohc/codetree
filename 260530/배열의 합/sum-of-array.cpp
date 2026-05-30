#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {};
    for ( int i = 0; i < 4; i++ ){
        int sum = 0, tmp;
        for( int j = 0; j < 4; j++ ){
            cin >> tmp;
            sum += tmp;
        }
        cout << sum << endl;
    }

    return 0;
}
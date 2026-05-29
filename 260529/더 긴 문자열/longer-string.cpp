#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int al = a.length(), bl = b.length();

    if ( al == bl ) cout << "same";
    else al < bl ? cout << b << ' ' << bl : cout << a << ' ' << al;

    return 0;
}
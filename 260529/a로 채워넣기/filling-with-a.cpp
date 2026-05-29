#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;

    int al = a.length();
    a[1] = 'a';
    a[al-2] = 'a';
    cout << a;

    return 0;
}
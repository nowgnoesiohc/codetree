#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    string T;
    cin >> N >> K >> T;

    string tmp;
    vector<string> v;

    for(int i=0; i<N; i++){
        cin >> tmp;
        if(tmp.find(T)==0) v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    cout << v[K-1];

    return 0;
}
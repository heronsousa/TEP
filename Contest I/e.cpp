#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string s;
    map<char, int> m;

    cin >> n >> s;

    for(auto c : s) ++m[c];

    n<=26 ? cout << n-m.size() << endl : cout << -1 << endl;

    return 0;
}
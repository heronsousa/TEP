#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    int k;

    cin >> n >> k;

    while(k--) n[n.size()-1] == '0' ? n = to_string(stoll(n)/10) : n = to_string(stoll(n)-1);

    cout << n << endl;

    return 0;
}
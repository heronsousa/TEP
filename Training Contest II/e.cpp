#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, q, m;
    vector<int> v;

    cin >> n;

    while(n--){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cin >> q;

    while(q--){
        cin >> m;

        vector<int>::iterator up;
        up = upper_bound(v.begin(), v.end(), m);
        cout << up-v.begin() << endl;
    }

    return 0;
}
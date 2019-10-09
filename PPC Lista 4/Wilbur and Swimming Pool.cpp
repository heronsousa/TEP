#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y, ans=0;
    set<int> sx, sy;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x >> y;
        sx.insert(x);
        sy.insert(y);
    }

    if(n==1) ans=0;
    else ans = (*sx.rbegin()-*sx.cbegin())*(*sy.rbegin()-*sy.cbegin());
    
    cout << (ans ? ans : -1) << endl;

    return 0;
}
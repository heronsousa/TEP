#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, ans;
    int n, k, t=-1;

    cin >> n >> k >> s;

    vector<int> borders(n+1, -1);
    
    ans+=s;

    if(s.size()==1) return cout << string(k, s[0]) << endl, 0;
    if(k==1) return cout << s << endl, 0;

    for(int i=0; i<n; i++){
        while (t>-1 && s[t]!=s[i]) t=borders[t];
        borders[i+1] = ++t;
    }

    k--;
    while(k--) ans+=s.substr(borders[borders.size()-1]);

    cout << ans << endl;

    return 0;
}
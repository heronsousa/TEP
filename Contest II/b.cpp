#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n, u=0, z=0;

    cin >> n >> s;

    for(auto c : s) c=='1' ? u++ : z++;

    if(u!=z) cout << 1 << endl << s << endl;
    else{
        cout << 2 << endl;
        cout << s[0] << " " << s.substr(1, s.size()) << endl;
    }
    
    return 0;
}
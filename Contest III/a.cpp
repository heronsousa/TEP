#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, t;
    string s;
 
    cin >> t;

    while(t--){
        cin >> n >> s;

        size_t pos = s.find('8');

        if(pos != string::npos){
            if((s[0]=='8' && s.size()>10) || s.size()-pos>10) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}
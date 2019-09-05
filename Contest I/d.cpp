#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;

    cin >> n >> s;

    for(int i=0; i<n; i++) s[i] = tolower(s[i]);

    for(char c='a'; c<='z'; c++){
        if(s.find(c)==string::npos){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}



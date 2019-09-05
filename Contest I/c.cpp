#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k;
    string s;
    map<char,int> m;

    cin >> n >> k >> s;

    for(auto c : s) m[c]++;

    int i=0, menor=m[s[0]];
    char c='A';

    for(i, c; i<k; i++, c++){
        if(m[c]<menor) menor=m[c];
    }
     cout << menor*k << endl;

    return 0;
}
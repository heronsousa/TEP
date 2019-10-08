#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string s, ans;
    map<string, int> m;
 
    cin >> n >> s;

    for(int i=0; i<s.size()-1; i++) m[s.substr(i,2)]++;

    int max = 0;

    for(auto c : m){
        if(c.second>max){
            max = c.second;
            ans = c.first;
        }
    } 

    cout << ans << endl;

    return 0;
}
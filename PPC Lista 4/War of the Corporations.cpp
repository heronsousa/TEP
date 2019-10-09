#include <bits/stdc++.h>

using namespace std;

int main(){
    int ans=0;
    string s1, s2;

    cin >> s1 >> s2;

    size_t found = s1.find(s2);
    while(found!=string::npos){
        ans++;
        s1 = s1.substr(found+s2.size());
        found = s1.find(s2);
    }

    cout << ans << endl;

    return 0;
}
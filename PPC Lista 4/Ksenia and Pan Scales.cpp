#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2, ans;

    cin >> s1 >> s2;

    for(auto c : s2){
        size_t it = s1.find('|');
        s1.substr(it+1).size()<s1.substr(0, it).size() ? s1+=c : s1=c+s1;
    }

    size_t it = s1.find('|');
    if(s1.substr(it+1).size()!=s1.substr(0, it).size()) return cout << "Impossible" << endl, 0;
    else cout << s1 << endl;

    return 0;
}
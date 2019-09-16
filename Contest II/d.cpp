#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s;
    int sla=0;

    cin >> s;
 
    for(int i=0, j=s.size()-1; i<s.size()/2; i++, j--) if(s[i]!=s[j]) sla++;
 
    sla==1 || (sla==0 && s.size()%2==1) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
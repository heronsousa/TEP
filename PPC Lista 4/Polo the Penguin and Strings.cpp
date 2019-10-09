#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, i;
    char c;

    cin >> n >> k;
    
    if((n>1&&k==1) || n<k) return cout << -1 << endl, 0;

    for(i=0, c='a'; i<n-(k>2 ? k-2 : 0); i++, c++){
        cout << c;
        if(c=='b') c-=2;
    }

    if(i<n) for(i=3, c='c'; i<=k; i++, c++) cout << c;
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long ans=0;

    cin >> n;

    for(int i=9; n>0; n-=i, i*=10) ans+=n;

    cout << ans << endl;

    return 0;
}
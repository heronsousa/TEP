#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    long long a=0, ans=0;

    cin >> n >> m;

    int menor = min(n, m);
    int maior = max(n, m);

    for(int i=1, j=4; i<=menor; i++, j--){
        if(j>maior) j--, i++;
        if(j==0) j=5;
        ans+=(maior-j)/5+1;
    }

    cout << (n+m<5 ? 0 : ans) << endl;

    return 0;
}
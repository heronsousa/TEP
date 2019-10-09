#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, res=0;
    string s, aux;
    vector<string> v;

    cin >> n;

    while(n--){
        cin >> s;
        v.push_back(s);
    }

    for(int i=0; i<v.size(); i++){
        aux = v[i];
        int cont=1;

        for(int j=0; j<v.size(); j++) if(i!=j && aux==v[j]) cont++;
        
        res = max(res, cont);
    }

    cout << res << endl;

    return 0;
}
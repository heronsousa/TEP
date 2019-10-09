#include <bits/stdc++.h>

using namespace std;

bool comp(int i, int j) { return i<j && i>0; }

int main(){
    int n, a, ans;
    vector<int> v;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }

    for(int i=0; i<n; i++){
        auto aux = min_element(v.begin(), v.end(), comp);
        
        if((aux-v.begin()==0 || aux-v.begin()==n-1) || (v[aux-v.begin()-1]==0 || v[aux-v.begin()+1]==0) ){
            ans = *aux;
            break;
        } 

        v[aux-v.begin()]=0;
    }


    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, aux=0;
    string s;
    map<string, int> m;
    
    m["Tetrahedron"] = 4;
    m["Cube"] = 6;
    m["Octahedron"] = 8;
    m["Dodecahedron"] = 12;
    m["Icosahedron"] = 20;

    cin >> n;

    while(n--){
        cin >> s;
        aux+=m[s];
    }

    cout << aux << endl;
    
    return 0;
}
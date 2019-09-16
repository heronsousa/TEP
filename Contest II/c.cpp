#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, aux;
    int n;

    cin >> n >> s;

    while(s.size()){
        if(s.size()%2==1){
            aux.push_back(s[0]);
            s.erase(s.begin());
        }
        else{
            reverse(aux.begin(), aux.end());
            aux.push_back(s[0]);
            s.erase(s.begin());
            reverse(aux.begin(), aux.end());
        }
    }

    cout << aux << endl;

    return 0;
}
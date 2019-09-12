#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n, aux;

    cin >> n;
    aux=n;

    if(n==1) s += "I hate ";
    else{
        for(int i=1; i<=n; i++){
            i%2==1 ? s += "I hate " : s += "I love ";
            if(i<n) s+= "that ";
        }
    }

    cout << s << "it" << endl;

    return 0;
}

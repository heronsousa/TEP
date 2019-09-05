#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin >> s;

    int a=0;
    
    for(auto c : s) if(c=='a') a++;

    int resto = s.size()-a;

    if(a>s.size()-a) cout << s.size() << endl;
    else{
        while(a<=resto) resto--;
        cout << a+resto << endl;
    }
    

    return 0;
}
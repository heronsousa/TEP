#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin >> s;

    long long a;
    
    try {
        a = stoll(s);
        if(a<=127 || a<=-128) cout << "byte" << endl;
        else if(a<=32767 || a<=-32768) cout << "short" << endl;
        else if(a<=2147483647 || a<=-2147483648) cout << "int" << endl;
        else if(a<=9223372036854775807 || a<=-9223372036854775808) cout << "long" << endl;
    }
    catch (const std::out_of_range& oor) {
        cout << "BigInteger" << endl;
    }

    return 0;
}
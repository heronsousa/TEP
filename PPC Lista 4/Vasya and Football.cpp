#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    int n, min, jog, h[2][100]={0};
    char time, car;

    cin >> s1 >> s2 >> n;

    while(n--){
        cin >> min >> time >> jog >> car;

        int aux = time=='a'; 
        if(h[aux][jog]<2){
            h[aux][jog]++;
            if(car=='r' || h[aux][jog]==2){
                cout << (aux ? s2 : s1) << ' ' << jog << ' ' << min << endl;
                h[aux][jog]=2;
            }
        }
    }

    return 0;
}
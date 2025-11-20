#include <bits/stdc++.h>
using namespace std;

int n, m[50];

int main(){
    cin>> n;
    m[0] = 1;;
    m[1] = 1;
    for (int i = 2; i <= n; ++i){
        m[i] = m[i - 1] + m[i - 2];
    }

    cout<< m[n-1];

    return 0;
}
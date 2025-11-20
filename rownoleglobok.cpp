#include <bits/stdc++.h>
using namespace std;

int n = 0, m = 0;

string s = " ";

string multi(int x, string y){
    string z = y;
    if (x <= 0) return "";
    else{
        for (int i = 0; i < x - 1; ++i){
            y += z;
        }
        return y;
    }
}

int main(){
    cin>> n >> m;

    for(int i = 0; i < n; ++i){
        cout<< multi(i, s) + multi(m, "*")<< endl;
    }
    return 0;
}
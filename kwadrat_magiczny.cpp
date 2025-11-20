#include <bits/stdc++.h>
using namespace std;

string tab[5][5], taka = "", sama = "", pom = "";

int wynik = 0;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    // i - wiersze, j - kolumny
    for (int i = 0; i < 5; ++i){
        cin>> pom;
        for (int j = 0; j < 5; ++j){
            tab[i][j] = pom[j];
        }
    }
    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            if (tab[i][j] != tab[j][i]){
                if (tab[i][j] == "?"){
                    tab[i][j] = tab[j][i];
                }
                else if (tab[j][i] == "?"){
                    tab[j][i] = tab[j][i];
                }
            }
            else if (tab[i][j] == tab[j][i] and tab[j][i] == "?" ){
                tab[i][j] = "D";
                tab[j][i] = "D";
            }
        }
    }

    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < 5; ++j){
            for (int k = 0; k < 5; ++k){
                taka += tab[j][k];
            }
        }
        for (int l = 0; l < 5; ++l){
            for (int k = 0; k < 5; ++k){
                sama += tab[k][l];
            }
        }
        if (taka == sama){
            wynik += 1;
        }
    }
    
    if (wynik == 5){
        for (int i = 0; i < 5; ++i){
            for (int j = 0; j < 5; ++j){
                cout<< tab[i][j];
            }
            cout<<endl;
        }
    }
    else {
        cout<< "NIE";
    }

    return 0;
}
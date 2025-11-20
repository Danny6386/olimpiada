#include <iostream>
using namespace std;

int main() {
	
	int szukana = 0;
	int N = 20;
	int tab[N] = {1, 4, 7, 12, 23, 24, 25, 28, 32, 36, 37, 40, 41, 43, 47, 50, 55, 60, 61, 66};
	
	int pocz = 0;
	int kon = N;
	int srodek;
	
	bool czy_znaleziona = false;
	
	
	
	while(kon>pocz){
	    srodek = (kon + pocz) / 2;
	    if (tab[srodek] > szukana){
	        kon = srodek;
	    }
	    else if (tab[srodek] < szukana){
	        pocz = srodek + 1;
	    }
	    else if(tab[srodek] == szukana){
	        czy_znaleziona = true;
	        break;
	    }
	}

	if(czy_znaleziona){
	    cout<<"TAK";
	}
	else{
	    cout<<"NIE";
	}
	return 0;

}


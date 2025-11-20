#include <iostream>
using namespace std;

int a, b, c;

int main() {
    cin>> a>> b>> c;

    if ((a + b) % 2 == 0){
        cout<< "TAK"<< endl;
        cout<< a << " " << b << endl;
        return 0;
    }
    else if ((a + c) % 2 == 0){
        cout<< "TAK"<< endl;
        cout<< a << " " << c << endl;
        return 0;
    }
    else if ((b + c) % 2 == 0){
        cout<< "TAK"<< endl;
        cout<< b << " " << c << endl;
        return 0;
    }
    else{
        cout<< "NIE";
        return 0;
    }
    
}

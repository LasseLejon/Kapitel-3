#include <iostream>
#include <iomanip>
using namespace std;

void skrivUtMultiplikationsmatris(int n){
    for(int r=1; r<=n; r+=1){
        for(int k=1; k<=n; k+=1)
            cout << setw(4) << r*k;
        cout << endl;
    }

}
















void shortcutToRitaMedText(){
    skrivUtMultiplikationsmatris(5);
}


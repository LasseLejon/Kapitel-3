#include <iostream>
#include <stdlib.h>

using namespace std;

int nyttTal(int n){
    return rand() % n;
}
int gissningen(){
    int guess = -1;
    cout << "Vad är din gissning? " << endl;
    cin >> guess;
    return guess;
}
void utforEnOmgang(){
    const int n = 100;
    const int datornsTal=nyttTal(n);
    int talet = -1;
            int antalGuesses=0;
    cout << "Datorn tänker på ett tal mellan noll och " << n << ". Gissa vilket! "<< endl;
    while(talet!=datornsTal){
        talet = gissningen();
        if(talet<datornsTal)
            cout << "too small" << endl;
        if (talet>datornsTal)
            cout << "too big" << endl;
        antalGuesses+=1;
    }
    cout << "Du gissade rätt på bara: " << antalGuesses << " försök" << endl;


}

void lekTal(){
    cout << "Gissa vilket tal datorn tanker pa? " <<endl;
    int talet=83;
    int gissning=0;
    int antalgissningar=0;
    while(talet!=gissning){
        cin >> gissning;
        if(gissning<talet)
            cout << "For litet" << endl;
        if(gissning>talet)
            cout << "för stort" << endl;
        antalgissningar+=1;
    }
    cout << "Du gissade rätt på bara: " << antalgissningar << " försök" << endl;
}
void shortcutToGissaTal(){
    utforEnOmgang();
}

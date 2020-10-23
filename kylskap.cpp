#include <iostream>

using namespace std;

void kylskap(){
    cout << "Välkommen" << endl;
    while(true){
        cout << "Skriv ín din temp" << endl;
        double tempe=0;
        cin >> tempe;
        if(tempe<=-273)
            break;
        if(tempe>=8)
            cout << "varmt" << endl;
        else if(tempe<=2)
            cout << "kallt" << endl;
        else
            cout << "lagom" << endl;


    }
    cout << "hejdå" << endl;
}


void kylskapMedWhilevillkor(){
    cout << "Välkommen till kylskåpsloopen 2" << endl;
    double tempp = 0;
    cin >> tempp;
    int done = 0;
    while(!done){
        if(tempp<-273)
            done = true;
        else{
            if(tempp>=8)
                cout << "too hot" << endl;
            done = true;
            if(tempp<=2)
                cout << "too cold" << endl;
            done = true;
            if(tempp<8 && tempp>2)
                cout << "lagom" << endl;
            done = true;
        }

    }
    cout << "lämnar kylskåpsloopen 2" << endl;
}

void kylskapMedWhileTrue(){
    cout << "Välkommen till kylskåpsloopen 1" << endl;
    while(true){
        cout << "Skriv in din temperatur: " << endl;
        double temperatur = 0;
        cin >> temperatur;
        if(temperatur < -273)
            break;
        if(temperatur>=8)
            cout << "för varmt" << endl;
        if(temperatur<=2)
            cout << "för kallt" << endl;
        if(temperatur>2 && temperatur<8)
            cout << "lagom" << endl;
    }


    cout << "Lämnar kylskåpsloopen 1" << endl;



}

void shortcutToKylskap(){
    kylskap();
}





